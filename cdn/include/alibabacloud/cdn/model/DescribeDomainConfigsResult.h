/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINCONFIGSRESULT_H_
#define ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINCONFIGSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cdn/CdnExport.h>

namespace AlibabaCloud
{
	namespace Cdn
	{
		namespace Model
		{
			class ALIBABACLOUD_CDN_EXPORT DescribeDomainConfigsResult : public ServiceResult
			{
			public:
				struct DomainConfigs
				{
					struct CcConfig
					{
						std::string status;
						std::string blockIps;
						std::string enable;
						std::string configId;
						std::string allowIps;
					};
					struct ErrorPageConfig
					{
						std::string status;
						std::string customPageUrl;
						std::string configId;
						std::string errorCode;
						std::string pageType;
					};
					struct OptimizeConfig
					{
						std::string status;
						std::string enable;
						std::string configId;
					};
					struct PageCompressConfig
					{
						std::string status;
						std::string enable;
						std::string configId;
					};
					struct IgnoreQueryStringConfig
					{
						std::string status;
						std::string enable;
						std::string configId;
						std::string hashKeyArgs;
					};
					struct RangeConfig
					{
						std::string status;
						std::string enable;
						std::string configId;
					};
					struct RefererConfig
					{
						std::string status;
						std::string allowEmpty;
						std::string disableAst;
						std::string configId;
						std::string referType;
						std::string referList;
					};
					struct ReqAuthConfig
					{
						std::string key2;
						std::string status;
						std::string key1;
						std::string authM3u8;
						std::string timeOut;
						std::string authAddr;
						std::string authRemoteDesc;
						std::string configId;
						std::string authType;
						std::string aliAuthWhiteList;
					};
					struct SrcHostConfig
					{
						std::string status;
						std::string domainName;
						std::string configId;
					};
					struct VideoSeekConfig
					{
						std::string status;
						std::string enable;
						std::string configId;
					};
					struct WafConfig
					{
						std::string status;
						std::string enable;
						std::string configId;
					};
					struct NotifyUrlConfig
					{
						std::string notifyUrl;
						std::string enable;
					};
					struct RedirectTypeConfig
					{
						std::string redirectType;
					};
					struct ForwardSchemeConfig
					{
						std::string schemeOrigin;
						std::string status;
						std::string enable;
						std::string configId;
						std::string schemeOriginPort;
					};
					struct RemoveQueryStringConfig
					{
						std::string status;
						std::string aliRemoveArgs;
						std::string configId;
					};
					struct L2OssKeyConfig
					{
						std::string status;
						std::string configId;
						std::string privateOssAuth;
					};
					struct MacServiceConfig
					{
						std::string status;
						std::string processResult;
						std::string enabled;
						std::string configId;
						std::string appList;
					};
					struct GreenManagerConfig
					{
						std::string status;
						std::string enabled;
						std::string configId;
					};
					struct HttpsOptionConfig
					{
						std::string status;
						std::string http2;
						std::string configId;
					};
					struct AliBusinessConfig
					{
						std::string status;
						std::string aliBusinessTable;
						std::string configId;
						std::string aliBusinessType;
					};
					struct IpAllowListConfig
					{
						std::string status;
						std::string ipList;
						std::string ipAclXfwd;
						std::string configId;
					};
					struct CacheExpiredConfig
					{
						std::string status;
						std::string cacheContent;
						std::string configId;
						std::string tTL;
						std::string weight;
						std::string cacheType;
					};
					struct HttpErrorPageConfig
					{
						std::string status;
						std::string pageUrl;
						std::string configId;
						std::string errorCode;
					};
					struct HttpHeaderConfig
					{
						std::string status;
						std::string headerValue;
						std::string headerKey;
						std::string configId;
					};
					struct DynamicConfig
					{
						std::string status;
						std::string staticUri;
						std::string dynamicCacheControl;
						std::string staticType;
						std::string configId;
						std::string dynamicOrigin;
						std::string staticPath;
					};
					struct ReqHeaderConfig
					{
						std::string status;
						std::string value;
						std::string configId;
						std::string key;
					};
					struct SetVarsConfig
					{
						std::string status;
						std::string varValue;
						std::string configId;
						std::string varName;
					};
					std::vector<IpAllowListConfig> ipAllowListConfig;
					std::vector<MacServiceConfig> macServiceConfig;
					std::vector<RedirectTypeConfig> redirectTypeConfig;
					std::vector<SetVarsConfig> setVarsConfigs;
					std::vector<ReqAuthConfig> reqAuthConfig;
					std::vector<GreenManagerConfig> greenManagerConfig;
					std::vector<RefererConfig> refererConfig;
					std::vector<SrcHostConfig> srcHostConfig;
					std::vector<ForwardSchemeConfig> forwardSchemeConfig;
					std::vector<HttpHeaderConfig> httpHeaderConfigs;
					std::vector<AliBusinessConfig> aliBusinessConfig;
					std::vector<HttpsOptionConfig> httpsOptionConfig;
					std::vector<ReqHeaderConfig> reqHeaderConfigs;
					std::vector<CacheExpiredConfig> cacheExpiredConfigs;
					std::vector<ErrorPageConfig> errorPageConfig;
					std::vector<RemoveQueryStringConfig> removeQueryStringConfig;
					std::vector<L2OssKeyConfig> l2OssKeyConfig;
					std::vector<HttpErrorPageConfig> httpErrorPageConfigs;
					std::vector<WafConfig> wafConfig;
					std::vector<OptimizeConfig> optimizeConfig;
					std::vector<IgnoreQueryStringConfig> ignoreQueryStringConfig;
					std::vector<RangeConfig> rangeConfig;
					std::vector<NotifyUrlConfig> notifyUrlConfig;
					std::vector<VideoSeekConfig> videoSeekConfig;
					std::vector<DynamicConfig> dynamicConfigs;
					std::vector<PageCompressConfig> pageCompressConfig;
					std::vector<CcConfig> ccConfig;
				};


				DescribeDomainConfigsResult();
				explicit DescribeDomainConfigsResult(const std::string &payload);
				~DescribeDomainConfigsResult();
				std::vector<DomainConfigs> getDomainConfigs()const;
				void setDomainConfigs(const std::vector<DomainConfigs>& domainConfigs);

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DomainConfigs> domainConfigs_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINCONFIGSRESULT_H_