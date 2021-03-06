/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMetricsPageEvent : SSMetricsBaseEvent

@property (getter=isCachedResponse, nonatomic) BOOL cachedResponse;
@property (nonatomic, retain) NSString *clientCorrelationKey;
@property (nonatomic) double connectionEndTime;
@property (nonatomic) unsigned int connectionStartNStatRXBytes;
@property (nonatomic) unsigned int connectionStartNStatTXBytes;
@property (nonatomic) double connectionStartTime;
@property (nonatomic) unsigned int connectionStopNStatRXBytes;
@property (nonatomic) unsigned int connectionStopNStatTXBytes;
@property (nonatomic) double domainLookupEndTime;
@property (nonatomic) double domainLookupStartTime;
@property (nonatomic) double fetchStartTime;
@property (nonatomic, retain) NSString *navigationType;
@property (nonatomic, retain) NSString *pageHistoryDescription;
@property (nonatomic) double pageRenderTime;
@property (nonatomic) unsigned int redirectCount;
@property (nonatomic) double redirectEndTime;
@property (nonatomic) double redirectStartTime;
@property (nonatomic, retain) NSString *referringAppName;
@property (nonatomic, retain) NSString *referringURL;
@property (nonatomic) double requestEndTime;
@property (nonatomic) double requestStartTime;
@property (nonatomic) double responseEndTime;
@property (nonatomic) double responseStartTime;
@property (nonatomic, retain) NSString *searchTerm;
@property (nonatomic) double secureConnectionStartTime;
@property (nonatomic, retain) NSString *serverApplicationInstance;
@property (nonatomic, retain) NSString *serverTiming;
@property (getter=isUbered, nonatomic) BOOL ubered;
@property (setter=setXPSamplingForced:, nonatomic) BOOL xpSamplingForced;
@property (setter=setXPSamplingPercentageCachedResponses:, nonatomic) double xpSamplingPercentageCachedResponses;
@property (setter=setXPSamplingPercentageUsers:, nonatomic) double xpSamplingPercentageUsers;
@property (setter=setXPSessionDuration:, nonatomic) double xpSessionDuration;

- (id)clientCorrelationKey;
- (double)connectionEndTime;
- (unsigned int)connectionStartNStatRXBytes;
- (unsigned int)connectionStartNStatTXBytes;
- (double)connectionStartTime;
- (unsigned int)connectionStopNStatRXBytes;
- (unsigned int)connectionStopNStatTXBytes;
- (id)description;
- (double)domainLookupEndTime;
- (double)domainLookupStartTime;
- (double)fetchStartTime;
- (id)init;
- (BOOL)isCachedResponse;
- (BOOL)isUbered;
- (id)navigationType;
- (id)pageHistoryDescription;
- (double)pageRenderTime;
- (unsigned int)redirectCount;
- (double)redirectEndTime;
- (double)redirectStartTime;
- (id)referringAppName;
- (id)referringURL;
- (double)requestEndTime;
- (double)requestStartTime;
- (double)responseEndTime;
- (double)responseStartTime;
- (id)searchTerm;
- (double)secureConnectionStartTime;
- (id)serverApplicationInstance;
- (id)serverTiming;
- (void)setCachedResponse:(BOOL)arg1;
- (void)setClientCorrelationKey:(id)arg1;
- (void)setConnectionEndTime:(double)arg1;
- (void)setConnectionStartNStatRXBytes:(unsigned int)arg1;
- (void)setConnectionStartNStatTXBytes:(unsigned int)arg1;
- (void)setConnectionStartTime:(double)arg1;
- (void)setConnectionStopNStatRXBytes:(unsigned int)arg1;
- (void)setConnectionStopNStatTXBytes:(unsigned int)arg1;
- (void)setDomainLookupEndTime:(double)arg1;
- (void)setDomainLookupStartTime:(double)arg1;
- (void)setFetchStartTime:(double)arg1;
- (void)setNavigationType:(id)arg1;
- (void)setPageHistoryDescription:(id)arg1;
- (void)setPageHistoryDescriptionWithIdentifiers:(id)arg1;
- (void)setPageRenderTime:(double)arg1;
- (void)setRedirectCount:(unsigned int)arg1;
- (void)setRedirectEndTime:(double)arg1;
- (void)setRedirectStartTime:(double)arg1;
- (void)setReferringAppName:(id)arg1;
- (void)setReferringURL:(id)arg1;
- (void)setRequestEndTime:(double)arg1;
- (void)setRequestStartTime:(double)arg1;
- (void)setResponseEndTime:(double)arg1;
- (void)setResponseStartTime:(double)arg1;
- (void)setSearchTerm:(id)arg1;
- (void)setSecureConnectionStartTime:(double)arg1;
- (void)setServerApplicationInstance:(id)arg1;
- (void)setServerTiming:(id)arg1;
- (void)setUbered:(BOOL)arg1;
- (void)setXPSamplingForced:(BOOL)arg1;
- (void)setXPSamplingPercentageCachedResponses:(double)arg1;
- (void)setXPSamplingPercentageUsers:(double)arg1;
- (void)setXPSessionDuration:(double)arg1;
- (BOOL)xpSamplingForced;
- (double)xpSamplingPercentageCachedResponses;
- (double)xpSamplingPercentageUsers;
- (double)xpSessionDuration;

@end
