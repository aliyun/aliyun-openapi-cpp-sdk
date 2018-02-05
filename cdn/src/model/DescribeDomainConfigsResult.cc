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
			if(!value["ConfigId"].isNull())
				cacheExpiredConfigObject.configId = value["ConfigId"].asString();
			if(!value["CacheType"].isNull())
				cacheExpiredConfigObject.cacheType = value["CacheType"].asString();
			if(!value["CacheContent"].isNull())
				cacheExpiredConfigObject.cacheContent = value["CacheContent"].asString();
			if(!value["TTL"].isNull())
				cacheExpiredConfigObject.tTL = value["TTL"].asString();
			if(!value["Weight"].isNull())
				cacheExpiredConfigObject.weight = value["Weight"].asString();
			if(!value["Status"].isNull())
				cacheExpiredConfigObject.status = value["Status"].asString();
			domainConfigsObject.cacheExpiredConfigs.push_back(cacheExpiredConfigObject);
		}
		auto allHttpErrorPageConfigs = value["HttpErrorPageConfigs"]["HttpErrorPageConfig"];
		for (auto value : allHttpErrorPageConfigs)
		{
			DomainConfigs::HttpErrorPageConfig httpErrorPageConfigObject;
			if(!value["ConfigId"].isNull())
				httpErrorPageConfigObject.configId = value["ConfigId"].asString();
			if(!value["ErrorCode"].isNull())
				httpErrorPageConfigObject.errorCode = value["ErrorCode"].asString();
			if(!value["PageUrl"].isNull())
				httpErrorPageConfigObject.pageUrl = value["PageUrl"].asString();
			if(!value["Status"].isNull())
				httpErrorPageConfigObject.status = value["Status"].asString();
			domainConfigsObject.httpErrorPageConfigs.push_back(httpErrorPageConfigObject);
		}
		auto allHttpHeaderConfigs = value["HttpHeaderConfigs"]["HttpHeaderConfig"];
		for (auto value : allHttpHeaderConfigs)
		{
			DomainConfigs::HttpHeaderConfig httpHeaderConfigObject;
			if(!value["ConfigId"].isNull())
				httpHeaderConfigObject.configId = value["ConfigId"].asString();
			if(!value["HeaderKey"].isNull())
				httpHeaderConfigObject.headerKey = value["HeaderKey"].asString();
			if(!value["HeaderValue"].isNull())
				httpHeaderConfigObject.headerValue = value["HeaderValue"].asString();
			if(!value["Status"].isNull())
				httpHeaderConfigObject.status = value["Status"].asString();
			domainConfigsObject.httpHeaderConfigs.push_back(httpHeaderConfigObject);
		}
		auto allDynamicConfigs = value["DynamicConfigs"]["DynamicConfig"];
		for (auto value : allDynamicConfigs)
		{
			DomainConfigs::DynamicConfig dynamicConfigObject;
			if(!value["ConfigId"].isNull())
				dynamicConfigObject.configId = value["ConfigId"].asString();
			if(!value["DynamicOrigin"].isNull())
				dynamicConfigObject.dynamicOrigin = value["DynamicOrigin"].asString();
			if(!value["StaticType"].isNull())
				dynamicConfigObject.staticType = value["StaticType"].asString();
			if(!value["StaticUri"].isNull())
				dynamicConfigObject.staticUri = value["StaticUri"].asString();
			if(!value["StaticPath"].isNull())
				dynamicConfigObject.staticPath = value["StaticPath"].asString();
			if(!value["DynamicCacheControl"].isNull())
				dynamicConfigObject.dynamicCacheControl = value["DynamicCacheControl"].asString();
			if(!value["Status"].isNull())
				dynamicConfigObject.status = value["Status"].asString();
			domainConfigsObject.dynamicConfigs.push_back(dynamicConfigObject);
		}
		auto allReqHeaderConfigs = value["ReqHeaderConfigs"]["ReqHeaderConfig"];
		for (auto value : allReqHeaderConfigs)
		{
			DomainConfigs::ReqHeaderConfig reqHeaderConfigObject;
			if(!value["ConfigId"].isNull())
				reqHeaderConfigObject.configId = value["ConfigId"].asString();
			if(!value["Key"].isNull())
				reqHeaderConfigObject.key = value["Key"].asString();
			if(!value["Value"].isNull())
				reqHeaderConfigObject.value = value["Value"].asString();
			if(!value["Status"].isNull())
				reqHeaderConfigObject.status = value["Status"].asString();
			domainConfigsObject.reqHeaderConfigs.push_back(reqHeaderConfigObject);
		}
		auto allSetVarsConfigs = value["SetVarsConfigs"]["SetVarsConfig"];
		for (auto value : allSetVarsConfigs)
		{
			DomainConfigs::SetVarsConfig setVarsConfigObject;
			if(!value["ConfigId"].isNull())
				setVarsConfigObject.configId = value["ConfigId"].asString();
			if(!value["VarName"].isNull())
				setVarsConfigObject.varName = value["VarName"].asString();
			if(!value["VarValue"].isNull())
				setVarsConfigObject.varValue = value["VarValue"].asString();
			if(!value["Status"].isNull())
				setVarsConfigObject.status = value["Status"].asString();
			domainConfigsObject.setVarsConfigs.push_back(setVarsConfigObject);
		}
		auto allCcConfig = value["CcConfig"];
		for (auto value : allCcConfig)
		{
			DomainConfigs::CcConfig ccConfigObject;
			if(!value["ConfigId"].isNull())
				ccConfigObject.configId = value["ConfigId"].asString();
			if(!value["Enable"].isNull())
				ccConfigObject.enable = value["Enable"].asString();
			if(!value["AllowIps"].isNull())
				ccConfigObject.allowIps = value["AllowIps"].asString();
			if(!value["BlockIps"].isNull())
				ccConfigObject.blockIps = value["BlockIps"].asString();
			if(!value["Status"].isNull())
				ccConfigObject.status = value["Status"].asString();
			domainConfigsObject.ccConfig.push_back(ccConfigObject);
		}
		auto allErrorPageConfig = value["ErrorPageConfig"];
		for (auto value : allErrorPageConfig)
		{
			DomainConfigs::ErrorPageConfig errorPageConfigObject;
			if(!value["ConfigId"].isNull())
				errorPageConfigObject.configId = value["ConfigId"].asString();
			if(!value["ErrorCode"].isNull())
				errorPageConfigObject.errorCode = value["ErrorCode"].asString();
			if(!value["PageType"].isNull())
				errorPageConfigObject.pageType = value["PageType"].asString();
			if(!value["CustomPageUrl"].isNull())
				errorPageConfigObject.customPageUrl = value["CustomPageUrl"].asString();
			if(!value["Status"].isNull())
				errorPageConfigObject.status = value["Status"].asString();
			domainConfigsObject.errorPageConfig.push_back(errorPageConfigObject);
		}
		auto allOptimizeConfig = value["OptimizeConfig"];
		for (auto value : allOptimizeConfig)
		{
			DomainConfigs::OptimizeConfig optimizeConfigObject;
			if(!value["ConfigId"].isNull())
				optimizeConfigObject.configId = value["ConfigId"].asString();
			if(!value["Enable"].isNull())
				optimizeConfigObject.enable = value["Enable"].asString();
			if(!value["Status"].isNull())
				optimizeConfigObject.status = value["Status"].asString();
			domainConfigsObject.optimizeConfig.push_back(optimizeConfigObject);
		}
		auto allPageCompressConfig = value["PageCompressConfig"];
		for (auto value : allPageCompressConfig)
		{
			DomainConfigs::PageCompressConfig pageCompressConfigObject;
			if(!value["ConfigId"].isNull())
				pageCompressConfigObject.configId = value["ConfigId"].asString();
			if(!value["Enable"].isNull())
				pageCompressConfigObject.enable = value["Enable"].asString();
			if(!value["Status"].isNull())
				pageCompressConfigObject.status = value["Status"].asString();
			domainConfigsObject.pageCompressConfig.push_back(pageCompressConfigObject);
		}
		auto allIgnoreQueryStringConfig = value["IgnoreQueryStringConfig"];
		for (auto value : allIgnoreQueryStringConfig)
		{
			DomainConfigs::IgnoreQueryStringConfig ignoreQueryStringConfigObject;
			if(!value["ConfigId"].isNull())
				ignoreQueryStringConfigObject.configId = value["ConfigId"].asString();
			if(!value["HashKeyArgs"].isNull())
				ignoreQueryStringConfigObject.hashKeyArgs = value["HashKeyArgs"].asString();
			if(!value["Enable"].isNull())
				ignoreQueryStringConfigObject.enable = value["Enable"].asString();
			if(!value["Status"].isNull())
				ignoreQueryStringConfigObject.status = value["Status"].asString();
			domainConfigsObject.ignoreQueryStringConfig.push_back(ignoreQueryStringConfigObject);
		}
		auto allRangeConfig = value["RangeConfig"];
		for (auto value : allRangeConfig)
		{
			DomainConfigs::RangeConfig rangeConfigObject;
			if(!value["ConfigId"].isNull())
				rangeConfigObject.configId = value["ConfigId"].asString();
			if(!value["Enable"].isNull())
				rangeConfigObject.enable = value["Enable"].asString();
			if(!value["Status"].isNull())
				rangeConfigObject.status = value["Status"].asString();
			domainConfigsObject.rangeConfig.push_back(rangeConfigObject);
		}
		auto allRefererConfig = value["RefererConfig"];
		for (auto value : allRefererConfig)
		{
			DomainConfigs::RefererConfig refererConfigObject;
			if(!value["ConfigId"].isNull())
				refererConfigObject.configId = value["ConfigId"].asString();
			if(!value["ReferType"].isNull())
				refererConfigObject.referType = value["ReferType"].asString();
			if(!value["ReferList"].isNull())
				refererConfigObject.referList = value["ReferList"].asString();
			if(!value["AllowEmpty"].isNull())
				refererConfigObject.allowEmpty = value["AllowEmpty"].asString();
			if(!value["DisableAst"].isNull())
				refererConfigObject.disableAst = value["DisableAst"].asString();
			if(!value["Status"].isNull())
				refererConfigObject.status = value["Status"].asString();
			domainConfigsObject.refererConfig.push_back(refererConfigObject);
		}
		auto allReqAuthConfig = value["ReqAuthConfig"];
		for (auto value : allReqAuthConfig)
		{
			DomainConfigs::ReqAuthConfig reqAuthConfigObject;
			if(!value["ConfigId"].isNull())
				reqAuthConfigObject.configId = value["ConfigId"].asString();
			if(!value["AuthType"].isNull())
				reqAuthConfigObject.authType = value["AuthType"].asString();
			if(!value["Key1"].isNull())
				reqAuthConfigObject.key1 = value["Key1"].asString();
			if(!value["Key2"].isNull())
				reqAuthConfigObject.key2 = value["Key2"].asString();
			if(!value["Status"].isNull())
				reqAuthConfigObject.status = value["Status"].asString();
			if(!value["AliAuthWhiteList"].isNull())
				reqAuthConfigObject.aliAuthWhiteList = value["AliAuthWhiteList"].asString();
			if(!value["AuthM3u8"].isNull())
				reqAuthConfigObject.authM3u8 = value["AuthM3u8"].asString();
			if(!value["AuthAddr"].isNull())
				reqAuthConfigObject.authAddr = value["AuthAddr"].asString();
			if(!value["AuthRemoteDesc"].isNull())
				reqAuthConfigObject.authRemoteDesc = value["AuthRemoteDesc"].asString();
			if(!value["TimeOut"].isNull())
				reqAuthConfigObject.timeOut = value["TimeOut"].asString();
			domainConfigsObject.reqAuthConfig.push_back(reqAuthConfigObject);
		}
		auto allSrcHostConfig = value["SrcHostConfig"];
		for (auto value : allSrcHostConfig)
		{
			DomainConfigs::SrcHostConfig srcHostConfigObject;
			if(!value["ConfigId"].isNull())
				srcHostConfigObject.configId = value["ConfigId"].asString();
			if(!value["DomainName"].isNull())
				srcHostConfigObject.domainName = value["DomainName"].asString();
			if(!value["Status"].isNull())
				srcHostConfigObject.status = value["Status"].asString();
			domainConfigsObject.srcHostConfig.push_back(srcHostConfigObject);
		}
		auto allVideoSeekConfig = value["VideoSeekConfig"];
		for (auto value : allVideoSeekConfig)
		{
			DomainConfigs::VideoSeekConfig videoSeekConfigObject;
			if(!value["ConfigId"].isNull())
				videoSeekConfigObject.configId = value["ConfigId"].asString();
			if(!value["Enable"].isNull())
				videoSeekConfigObject.enable = value["Enable"].asString();
			if(!value["Status"].isNull())
				videoSeekConfigObject.status = value["Status"].asString();
			domainConfigsObject.videoSeekConfig.push_back(videoSeekConfigObject);
		}
		auto allWafConfig = value["WafConfig"];
		for (auto value : allWafConfig)
		{
			DomainConfigs::WafConfig wafConfigObject;
			if(!value["ConfigId"].isNull())
				wafConfigObject.configId = value["ConfigId"].asString();
			if(!value["Enable"].isNull())
				wafConfigObject.enable = value["Enable"].asString();
			if(!value["Status"].isNull())
				wafConfigObject.status = value["Status"].asString();
			domainConfigsObject.wafConfig.push_back(wafConfigObject);
		}
		auto allNotifyUrlConfig = value["NotifyUrlConfig"];
		for (auto value : allNotifyUrlConfig)
		{
			DomainConfigs::NotifyUrlConfig notifyUrlConfigObject;
			if(!value["Enable"].isNull())
				notifyUrlConfigObject.enable = value["Enable"].asString();
			if(!value["NotifyUrl"].isNull())
				notifyUrlConfigObject.notifyUrl = value["NotifyUrl"].asString();
			domainConfigsObject.notifyUrlConfig.push_back(notifyUrlConfigObject);
		}
		auto allRedirectTypeConfig = value["RedirectTypeConfig"];
		for (auto value : allRedirectTypeConfig)
		{
			DomainConfigs::RedirectTypeConfig redirectTypeConfigObject;
			if(!value["RedirectType"].isNull())
				redirectTypeConfigObject.redirectType = value["RedirectType"].asString();
			domainConfigsObject.redirectTypeConfig.push_back(redirectTypeConfigObject);
		}
		auto allForwardSchemeConfig = value["ForwardSchemeConfig"];
		for (auto value : allForwardSchemeConfig)
		{
			DomainConfigs::ForwardSchemeConfig forwardSchemeConfigObject;
			if(!value["ConfigId"].isNull())
				forwardSchemeConfigObject.configId = value["ConfigId"].asString();
			if(!value["Enable"].isNull())
				forwardSchemeConfigObject.enable = value["Enable"].asString();
			if(!value["SchemeOrigin"].isNull())
				forwardSchemeConfigObject.schemeOrigin = value["SchemeOrigin"].asString();
			if(!value["SchemeOriginPort"].isNull())
				forwardSchemeConfigObject.schemeOriginPort = value["SchemeOriginPort"].asString();
			if(!value["Status"].isNull())
				forwardSchemeConfigObject.status = value["Status"].asString();
			domainConfigsObject.forwardSchemeConfig.push_back(forwardSchemeConfigObject);
		}
		auto allRemoveQueryStringConfig = value["RemoveQueryStringConfig"];
		for (auto value : allRemoveQueryStringConfig)
		{
			DomainConfigs::RemoveQueryStringConfig removeQueryStringConfigObject;
			if(!value["AliRemoveArgs"].isNull())
				removeQueryStringConfigObject.aliRemoveArgs = value["AliRemoveArgs"].asString();
			if(!value["ConfigId"].isNull())
				removeQueryStringConfigObject.configId = value["ConfigId"].asString();
			if(!value["Status"].isNull())
				removeQueryStringConfigObject.status = value["Status"].asString();
			domainConfigsObject.removeQueryStringConfig.push_back(removeQueryStringConfigObject);
		}
		auto allL2OssKeyConfig = value["L2OssKeyConfig"];
		for (auto value : allL2OssKeyConfig)
		{
			DomainConfigs::L2OssKeyConfig l2OssKeyConfigObject;
			if(!value["PrivateOssAuth"].isNull())
				l2OssKeyConfigObject.privateOssAuth = value["PrivateOssAuth"].asString();
			if(!value["ConfigId"].isNull())
				l2OssKeyConfigObject.configId = value["ConfigId"].asString();
			if(!value["Status"].isNull())
				l2OssKeyConfigObject.status = value["Status"].asString();
			domainConfigsObject.l2OssKeyConfig.push_back(l2OssKeyConfigObject);
		}
		auto allMacServiceConfig = value["MacServiceConfig"];
		for (auto value : allMacServiceConfig)
		{
			DomainConfigs::MacServiceConfig macServiceConfigObject;
			if(!value["AppList"].isNull())
				macServiceConfigObject.appList = value["AppList"].asString();
			if(!value["Enabled"].isNull())
				macServiceConfigObject.enabled = value["Enabled"].asString();
			if(!value["ProcessResult"].isNull())
				macServiceConfigObject.processResult = value["ProcessResult"].asString();
			if(!value["ConfigId"].isNull())
				macServiceConfigObject.configId = value["ConfigId"].asString();
			if(!value["Status"].isNull())
				macServiceConfigObject.status = value["Status"].asString();
			domainConfigsObject.macServiceConfig.push_back(macServiceConfigObject);
		}
		auto allGreenManagerConfig = value["GreenManagerConfig"];
		for (auto value : allGreenManagerConfig)
		{
			DomainConfigs::GreenManagerConfig greenManagerConfigObject;
			if(!value["Enabled"].isNull())
				greenManagerConfigObject.enabled = value["Enabled"].asString();
			if(!value["ConfigId"].isNull())
				greenManagerConfigObject.configId = value["ConfigId"].asString();
			if(!value["Status"].isNull())
				greenManagerConfigObject.status = value["Status"].asString();
			domainConfigsObject.greenManagerConfig.push_back(greenManagerConfigObject);
		}
		auto allHttpsOptionConfig = value["HttpsOptionConfig"];
		for (auto value : allHttpsOptionConfig)
		{
			DomainConfigs::HttpsOptionConfig httpsOptionConfigObject;
			if(!value["Http2"].isNull())
				httpsOptionConfigObject.http2 = value["Http2"].asString();
			if(!value["ConfigId"].isNull())
				httpsOptionConfigObject.configId = value["ConfigId"].asString();
			if(!value["Status"].isNull())
				httpsOptionConfigObject.status = value["Status"].asString();
			domainConfigsObject.httpsOptionConfig.push_back(httpsOptionConfigObject);
		}
		auto allAliBusinessConfig = value["AliBusinessConfig"];
		for (auto value : allAliBusinessConfig)
		{
			DomainConfigs::AliBusinessConfig aliBusinessConfigObject;
			if(!value["AliBusinessTable"].isNull())
				aliBusinessConfigObject.aliBusinessTable = value["AliBusinessTable"].asString();
			if(!value["AliBusinessType"].isNull())
				aliBusinessConfigObject.aliBusinessType = value["AliBusinessType"].asString();
			if(!value["ConfigId"].isNull())
				aliBusinessConfigObject.configId = value["ConfigId"].asString();
			if(!value["Status"].isNull())
				aliBusinessConfigObject.status = value["Status"].asString();
			domainConfigsObject.aliBusinessConfig.push_back(aliBusinessConfigObject);
		}
		auto allIpAllowListConfig = value["IpAllowListConfig"];
		for (auto value : allIpAllowListConfig)
		{
			DomainConfigs::IpAllowListConfig ipAllowListConfigObject;
			if(!value["ConfigId"].isNull())
				ipAllowListConfigObject.configId = value["ConfigId"].asString();
			if(!value["IpList"].isNull())
				ipAllowListConfigObject.ipList = value["IpList"].asString();
			if(!value["IpAclXfwd"].isNull())
				ipAllowListConfigObject.ipAclXfwd = value["IpAclXfwd"].asString();
			if(!value["Status"].isNull())
				ipAllowListConfigObject.status = value["Status"].asString();
			domainConfigsObject.ipAllowListConfig.push_back(ipAllowListConfigObject);
		}
		domainConfigs_.push_back(domainConfigsObject);
	}

}

std::vector<DescribeDomainConfigsResult::DomainConfigs> DescribeDomainConfigsResult::getDomainConfigs()const
{
	return domainConfigs_;
}

