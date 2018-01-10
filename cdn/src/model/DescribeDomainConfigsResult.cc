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

#include <alibabacloud/cdn/model/DescribeDomainConfigsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainConfigsResult::DescribeDomainConfigsResult() :
	ServiceResult()
{}

DescribeDomainConfigsResult::DescribeDomainConfigsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainConfigsResult::~DescribeDomainConfigsResult()
{}

void DescribeDomainConfigsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allDomainConfigs = value["DomainConfigs"];
	for (auto value : allDomainConfigs)
	{
		DomainConfigs domainConfigsObject;
		auto allCacheExpiredConfigs = value["CacheExpiredConfigs"]["CacheExpiredConfig"];
		for (auto value : allCacheExpiredConfigs)
		{
			DomainConfigs::CacheExpiredConfig cacheExpiredConfigObject;
			cacheExpiredConfigObject.configId = value["ConfigId"].asString();
			cacheExpiredConfigObject.cacheType = value["CacheType"].asString();
			cacheExpiredConfigObject.cacheContent = value["CacheContent"].asString();
			cacheExpiredConfigObject.tTL = value["TTL"].asString();
			cacheExpiredConfigObject.weight = value["Weight"].asString();
			cacheExpiredConfigObject.status = value["Status"].asString();
			domainConfigsObject.cacheExpiredConfigs.push_back(cacheExpiredConfigObject);
		}
		auto allHttpErrorPageConfigs = value["HttpErrorPageConfigs"]["HttpErrorPageConfig"];
		for (auto value : allHttpErrorPageConfigs)
		{
			DomainConfigs::HttpErrorPageConfig httpErrorPageConfigObject;
			httpErrorPageConfigObject.configId = value["ConfigId"].asString();
			httpErrorPageConfigObject.errorCode = value["ErrorCode"].asString();
			httpErrorPageConfigObject.pageUrl = value["PageUrl"].asString();
			httpErrorPageConfigObject.status = value["Status"].asString();
			domainConfigsObject.httpErrorPageConfigs.push_back(httpErrorPageConfigObject);
		}
		auto allHttpHeaderConfigs = value["HttpHeaderConfigs"]["HttpHeaderConfig"];
		for (auto value : allHttpHeaderConfigs)
		{
			DomainConfigs::HttpHeaderConfig httpHeaderConfigObject;
			httpHeaderConfigObject.configId = value["ConfigId"].asString();
			httpHeaderConfigObject.headerKey = value["HeaderKey"].asString();
			httpHeaderConfigObject.headerValue = value["HeaderValue"].asString();
			httpHeaderConfigObject.status = value["Status"].asString();
			domainConfigsObject.httpHeaderConfigs.push_back(httpHeaderConfigObject);
		}
		auto allDynamicConfigs = value["DynamicConfigs"]["DynamicConfig"];
		for (auto value : allDynamicConfigs)
		{
			DomainConfigs::DynamicConfig dynamicConfigObject;
			dynamicConfigObject.configId = value["ConfigId"].asString();
			dynamicConfigObject.dynamicOrigin = value["DynamicOrigin"].asString();
			dynamicConfigObject.staticType = value["StaticType"].asString();
			dynamicConfigObject.staticUri = value["StaticUri"].asString();
			dynamicConfigObject.staticPath = value["StaticPath"].asString();
			dynamicConfigObject.dynamicCacheControl = value["DynamicCacheControl"].asString();
			dynamicConfigObject.status = value["Status"].asString();
			domainConfigsObject.dynamicConfigs.push_back(dynamicConfigObject);
		}
		auto allReqHeaderConfigs = value["ReqHeaderConfigs"]["ReqHeaderConfig"];
		for (auto value : allReqHeaderConfigs)
		{
			DomainConfigs::ReqHeaderConfig reqHeaderConfigObject;
			reqHeaderConfigObject.configId = value["ConfigId"].asString();
			reqHeaderConfigObject.key = value["Key"].asString();
			reqHeaderConfigObject.value = value["Value"].asString();
			reqHeaderConfigObject.status = value["Status"].asString();
			domainConfigsObject.reqHeaderConfigs.push_back(reqHeaderConfigObject);
		}
		auto allSetVarsConfigs = value["SetVarsConfigs"]["SetVarsConfig"];
		for (auto value : allSetVarsConfigs)
		{
			DomainConfigs::SetVarsConfig setVarsConfigObject;
			setVarsConfigObject.configId = value["ConfigId"].asString();
			setVarsConfigObject.varName = value["VarName"].asString();
			setVarsConfigObject.varValue = value["VarValue"].asString();
			setVarsConfigObject.status = value["Status"].asString();
			domainConfigsObject.setVarsConfigs.push_back(setVarsConfigObject);
		}
		auto allCcConfig = value["CcConfig"];
		for (auto value : allCcConfig)
		{
			DomainConfigs::CcConfig ccConfigObject;
			ccConfigObject.configId = value["ConfigId"].asString();
			ccConfigObject.enable = value["Enable"].asString();
			ccConfigObject.allowIps = value["AllowIps"].asString();
			ccConfigObject.blockIps = value["BlockIps"].asString();
			ccConfigObject.status = value["Status"].asString();
			domainConfigsObject.ccConfig.push_back(ccConfigObject);
		}
		auto allErrorPageConfig = value["ErrorPageConfig"];
		for (auto value : allErrorPageConfig)
		{
			DomainConfigs::ErrorPageConfig errorPageConfigObject;
			errorPageConfigObject.configId = value["ConfigId"].asString();
			errorPageConfigObject.errorCode = value["ErrorCode"].asString();
			errorPageConfigObject.pageType = value["PageType"].asString();
			errorPageConfigObject.customPageUrl = value["CustomPageUrl"].asString();
			errorPageConfigObject.status = value["Status"].asString();
			domainConfigsObject.errorPageConfig.push_back(errorPageConfigObject);
		}
		auto allOptimizeConfig = value["OptimizeConfig"];
		for (auto value : allOptimizeConfig)
		{
			DomainConfigs::OptimizeConfig optimizeConfigObject;
			optimizeConfigObject.configId = value["ConfigId"].asString();
			optimizeConfigObject.enable = value["Enable"].asString();
			optimizeConfigObject.status = value["Status"].asString();
			domainConfigsObject.optimizeConfig.push_back(optimizeConfigObject);
		}
		auto allPageCompressConfig = value["PageCompressConfig"];
		for (auto value : allPageCompressConfig)
		{
			DomainConfigs::PageCompressConfig pageCompressConfigObject;
			pageCompressConfigObject.configId = value["ConfigId"].asString();
			pageCompressConfigObject.enable = value["Enable"].asString();
			pageCompressConfigObject.status = value["Status"].asString();
			domainConfigsObject.pageCompressConfig.push_back(pageCompressConfigObject);
		}
		auto allIgnoreQueryStringConfig = value["IgnoreQueryStringConfig"];
		for (auto value : allIgnoreQueryStringConfig)
		{
			DomainConfigs::IgnoreQueryStringConfig ignoreQueryStringConfigObject;
			ignoreQueryStringConfigObject.configId = value["ConfigId"].asString();
			ignoreQueryStringConfigObject.hashKeyArgs = value["HashKeyArgs"].asString();
			ignoreQueryStringConfigObject.enable = value["Enable"].asString();
			ignoreQueryStringConfigObject.status = value["Status"].asString();
			domainConfigsObject.ignoreQueryStringConfig.push_back(ignoreQueryStringConfigObject);
		}
		auto allRangeConfig = value["RangeConfig"];
		for (auto value : allRangeConfig)
		{
			DomainConfigs::RangeConfig rangeConfigObject;
			rangeConfigObject.configId = value["ConfigId"].asString();
			rangeConfigObject.enable = value["Enable"].asString();
			rangeConfigObject.status = value["Status"].asString();
			domainConfigsObject.rangeConfig.push_back(rangeConfigObject);
		}
		auto allRefererConfig = value["RefererConfig"];
		for (auto value : allRefererConfig)
		{
			DomainConfigs::RefererConfig refererConfigObject;
			refererConfigObject.configId = value["ConfigId"].asString();
			refererConfigObject.referType = value["ReferType"].asString();
			refererConfigObject.referList = value["ReferList"].asString();
			refererConfigObject.allowEmpty = value["AllowEmpty"].asString();
			refererConfigObject.disableAst = value["DisableAst"].asString();
			refererConfigObject.status = value["Status"].asString();
			domainConfigsObject.refererConfig.push_back(refererConfigObject);
		}
		auto allReqAuthConfig = value["ReqAuthConfig"];
		for (auto value : allReqAuthConfig)
		{
			DomainConfigs::ReqAuthConfig reqAuthConfigObject;
			reqAuthConfigObject.configId = value["ConfigId"].asString();
			reqAuthConfigObject.authType = value["AuthType"].asString();
			reqAuthConfigObject.key1 = value["Key1"].asString();
			reqAuthConfigObject.key2 = value["Key2"].asString();
			reqAuthConfigObject.status = value["Status"].asString();
			reqAuthConfigObject.aliAuthWhiteList = value["AliAuthWhiteList"].asString();
			reqAuthConfigObject.authM3u8 = value["AuthM3u8"].asString();
			reqAuthConfigObject.authAddr = value["AuthAddr"].asString();
			reqAuthConfigObject.authRemoteDesc = value["AuthRemoteDesc"].asString();
			reqAuthConfigObject.timeOut = value["TimeOut"].asString();
			domainConfigsObject.reqAuthConfig.push_back(reqAuthConfigObject);
		}
		auto allSrcHostConfig = value["SrcHostConfig"];
		for (auto value : allSrcHostConfig)
		{
			DomainConfigs::SrcHostConfig srcHostConfigObject;
			srcHostConfigObject.configId = value["ConfigId"].asString();
			srcHostConfigObject.domainName = value["DomainName"].asString();
			srcHostConfigObject.status = value["Status"].asString();
			domainConfigsObject.srcHostConfig.push_back(srcHostConfigObject);
		}
		auto allVideoSeekConfig = value["VideoSeekConfig"];
		for (auto value : allVideoSeekConfig)
		{
			DomainConfigs::VideoSeekConfig videoSeekConfigObject;
			videoSeekConfigObject.configId = value["ConfigId"].asString();
			videoSeekConfigObject.enable = value["Enable"].asString();
			videoSeekConfigObject.status = value["Status"].asString();
			domainConfigsObject.videoSeekConfig.push_back(videoSeekConfigObject);
		}
		auto allWafConfig = value["WafConfig"];
		for (auto value : allWafConfig)
		{
			DomainConfigs::WafConfig wafConfigObject;
			wafConfigObject.configId = value["ConfigId"].asString();
			wafConfigObject.enable = value["Enable"].asString();
			wafConfigObject.status = value["Status"].asString();
			domainConfigsObject.wafConfig.push_back(wafConfigObject);
		}
		auto allNotifyUrlConfig = value["NotifyUrlConfig"];
		for (auto value : allNotifyUrlConfig)
		{
			DomainConfigs::NotifyUrlConfig notifyUrlConfigObject;
			notifyUrlConfigObject.enable = value["Enable"].asString();
			notifyUrlConfigObject.notifyUrl = value["NotifyUrl"].asString();
			domainConfigsObject.notifyUrlConfig.push_back(notifyUrlConfigObject);
		}
		auto allRedirectTypeConfig = value["RedirectTypeConfig"];
		for (auto value : allRedirectTypeConfig)
		{
			DomainConfigs::RedirectTypeConfig redirectTypeConfigObject;
			redirectTypeConfigObject.redirectType = value["RedirectType"].asString();
			domainConfigsObject.redirectTypeConfig.push_back(redirectTypeConfigObject);
		}
		auto allForwardSchemeConfig = value["ForwardSchemeConfig"];
		for (auto value : allForwardSchemeConfig)
		{
			DomainConfigs::ForwardSchemeConfig forwardSchemeConfigObject;
			forwardSchemeConfigObject.configId = value["ConfigId"].asString();
			forwardSchemeConfigObject.enable = value["Enable"].asString();
			forwardSchemeConfigObject.schemeOrigin = value["SchemeOrigin"].asString();
			forwardSchemeConfigObject.schemeOriginPort = value["SchemeOriginPort"].asString();
			forwardSchemeConfigObject.status = value["Status"].asString();
			domainConfigsObject.forwardSchemeConfig.push_back(forwardSchemeConfigObject);
		}
		auto allRemoveQueryStringConfig = value["RemoveQueryStringConfig"];
		for (auto value : allRemoveQueryStringConfig)
		{
			DomainConfigs::RemoveQueryStringConfig removeQueryStringConfigObject;
			removeQueryStringConfigObject.aliRemoveArgs = value["AliRemoveArgs"].asString();
			removeQueryStringConfigObject.configId = value["ConfigId"].asString();
			removeQueryStringConfigObject.status = value["Status"].asString();
			domainConfigsObject.removeQueryStringConfig.push_back(removeQueryStringConfigObject);
		}
		auto allL2OssKeyConfig = value["L2OssKeyConfig"];
		for (auto value : allL2OssKeyConfig)
		{
			DomainConfigs::L2OssKeyConfig l2OssKeyConfigObject;
			l2OssKeyConfigObject.privateOssAuth = value["PrivateOssAuth"].asString();
			l2OssKeyConfigObject.configId = value["ConfigId"].asString();
			l2OssKeyConfigObject.status = value["Status"].asString();
			domainConfigsObject.l2OssKeyConfig.push_back(l2OssKeyConfigObject);
		}
		auto allMacServiceConfig = value["MacServiceConfig"];
		for (auto value : allMacServiceConfig)
		{
			DomainConfigs::MacServiceConfig macServiceConfigObject;
			macServiceConfigObject.appList = value["AppList"].asString();
			macServiceConfigObject.enabled = value["Enabled"].asString();
			macServiceConfigObject.processResult = value["ProcessResult"].asString();
			macServiceConfigObject.configId = value["ConfigId"].asString();
			macServiceConfigObject.status = value["Status"].asString();
			domainConfigsObject.macServiceConfig.push_back(macServiceConfigObject);
		}
		auto allGreenManagerConfig = value["GreenManagerConfig"];
		for (auto value : allGreenManagerConfig)
		{
			DomainConfigs::GreenManagerConfig greenManagerConfigObject;
			greenManagerConfigObject.enabled = value["Enabled"].asString();
			greenManagerConfigObject.configId = value["ConfigId"].asString();
			greenManagerConfigObject.status = value["Status"].asString();
			domainConfigsObject.greenManagerConfig.push_back(greenManagerConfigObject);
		}
		auto allHttpsOptionConfig = value["HttpsOptionConfig"];
		for (auto value : allHttpsOptionConfig)
		{
			DomainConfigs::HttpsOptionConfig httpsOptionConfigObject;
			httpsOptionConfigObject.http2 = value["Http2"].asString();
			httpsOptionConfigObject.configId = value["ConfigId"].asString();
			httpsOptionConfigObject.status = value["Status"].asString();
			domainConfigsObject.httpsOptionConfig.push_back(httpsOptionConfigObject);
		}
		auto allAliBusinessConfig = value["AliBusinessConfig"];
		for (auto value : allAliBusinessConfig)
		{
			DomainConfigs::AliBusinessConfig aliBusinessConfigObject;
			aliBusinessConfigObject.aliBusinessTable = value["AliBusinessTable"].asString();
			aliBusinessConfigObject.aliBusinessType = value["AliBusinessType"].asString();
			aliBusinessConfigObject.configId = value["ConfigId"].asString();
			aliBusinessConfigObject.status = value["Status"].asString();
			domainConfigsObject.aliBusinessConfig.push_back(aliBusinessConfigObject);
		}
		auto allIpAllowListConfig = value["IpAllowListConfig"];
		for (auto value : allIpAllowListConfig)
		{
			DomainConfigs::IpAllowListConfig ipAllowListConfigObject;
			ipAllowListConfigObject.configId = value["ConfigId"].asString();
			ipAllowListConfigObject.ipList = value["IpList"].asString();
			ipAllowListConfigObject.ipAclXfwd = value["IpAclXfwd"].asString();
			ipAllowListConfigObject.status = value["Status"].asString();
			domainConfigsObject.ipAllowListConfig.push_back(ipAllowListConfigObject);
		}
		domainConfigs_.push_back(domainConfigsObject);
	}

}

