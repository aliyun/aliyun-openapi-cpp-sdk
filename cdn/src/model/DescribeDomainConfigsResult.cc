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
	auto domainConfigsNode = value["DomainConfigs"];
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
		domainConfigs_.cacheExpiredConfigs.push_back(cacheExpiredConfigObject);
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
		domainConfigs_.httpErrorPageConfigs.push_back(httpErrorPageConfigObject);
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
		domainConfigs_.httpHeaderConfigs.push_back(httpHeaderConfigObject);
	}
	auto allDynamicConfigs = value["DynamicConfigs"]["DynamicConfig"];
	for (auto value : allDynamicConfigs)
	{
		DomainConfigs::DynamicConfig dynamicConfigObject;
		if(!value["ConfigId"].isNull())
			dynamicConfigObject.configId = value["ConfigId"].asString();
		if(!value["Enable"].isNull())
			dynamicConfigObject.enable = value["Enable"].asString();
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
		domainConfigs_.dynamicConfigs.push_back(dynamicConfigObject);
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
		domainConfigs_.reqHeaderConfigs.push_back(reqHeaderConfigObject);
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
		domainConfigs_.setVarsConfigs.push_back(setVarsConfigObject);
	}
	auto ccConfigNode = domainConfigsNode["CcConfig"];
	if(!ccConfigNode["ConfigId"].isNull())
		domainConfigs_.ccConfig.configId = ccConfigNode["ConfigId"].asString();
	if(!ccConfigNode["Enable"].isNull())
		domainConfigs_.ccConfig.enable = ccConfigNode["Enable"].asString();
	if(!ccConfigNode["AllowIps"].isNull())
		domainConfigs_.ccConfig.allowIps = ccConfigNode["AllowIps"].asString();
	if(!ccConfigNode["BlockIps"].isNull())
		domainConfigs_.ccConfig.blockIps = ccConfigNode["BlockIps"].asString();
	if(!ccConfigNode["Status"].isNull())
		domainConfigs_.ccConfig.status = ccConfigNode["Status"].asString();
	auto errorPageConfigNode = domainConfigsNode["ErrorPageConfig"];
	if(!errorPageConfigNode["ConfigId"].isNull())
		domainConfigs_.errorPageConfig.configId = errorPageConfigNode["ConfigId"].asString();
	if(!errorPageConfigNode["ErrorCode"].isNull())
		domainConfigs_.errorPageConfig.errorCode = errorPageConfigNode["ErrorCode"].asString();
	if(!errorPageConfigNode["PageType"].isNull())
		domainConfigs_.errorPageConfig.pageType = errorPageConfigNode["PageType"].asString();
	if(!errorPageConfigNode["CustomPageUrl"].isNull())
		domainConfigs_.errorPageConfig.customPageUrl = errorPageConfigNode["CustomPageUrl"].asString();
	if(!errorPageConfigNode["Status"].isNull())
		domainConfigs_.errorPageConfig.status = errorPageConfigNode["Status"].asString();
	auto optimizeConfigNode = domainConfigsNode["OptimizeConfig"];
	if(!optimizeConfigNode["ConfigId"].isNull())
		domainConfigs_.optimizeConfig.configId = optimizeConfigNode["ConfigId"].asString();
	if(!optimizeConfigNode["Enable"].isNull())
		domainConfigs_.optimizeConfig.enable = optimizeConfigNode["Enable"].asString();
	if(!optimizeConfigNode["Status"].isNull())
		domainConfigs_.optimizeConfig.status = optimizeConfigNode["Status"].asString();
	auto pageCompressConfigNode = domainConfigsNode["PageCompressConfig"];
	if(!pageCompressConfigNode["ConfigId"].isNull())
		domainConfigs_.pageCompressConfig.configId = pageCompressConfigNode["ConfigId"].asString();
	if(!pageCompressConfigNode["Enable"].isNull())
		domainConfigs_.pageCompressConfig.enable = pageCompressConfigNode["Enable"].asString();
	if(!pageCompressConfigNode["Status"].isNull())
		domainConfigs_.pageCompressConfig.status = pageCompressConfigNode["Status"].asString();
	auto ignoreQueryStringConfigNode = domainConfigsNode["IgnoreQueryStringConfig"];
	if(!ignoreQueryStringConfigNode["ConfigId"].isNull())
		domainConfigs_.ignoreQueryStringConfig.configId = ignoreQueryStringConfigNode["ConfigId"].asString();
	if(!ignoreQueryStringConfigNode["HashKeyArgs"].isNull())
		domainConfigs_.ignoreQueryStringConfig.hashKeyArgs = ignoreQueryStringConfigNode["HashKeyArgs"].asString();
	if(!ignoreQueryStringConfigNode["Enable"].isNull())
		domainConfigs_.ignoreQueryStringConfig.enable = ignoreQueryStringConfigNode["Enable"].asString();
	if(!ignoreQueryStringConfigNode["Status"].isNull())
		domainConfigs_.ignoreQueryStringConfig.status = ignoreQueryStringConfigNode["Status"].asString();
	auto rangeConfigNode = domainConfigsNode["RangeConfig"];
	if(!rangeConfigNode["ConfigId"].isNull())
		domainConfigs_.rangeConfig.configId = rangeConfigNode["ConfigId"].asString();
	if(!rangeConfigNode["Enable"].isNull())
		domainConfigs_.rangeConfig.enable = rangeConfigNode["Enable"].asString();
	if(!rangeConfigNode["Status"].isNull())
		domainConfigs_.rangeConfig.status = rangeConfigNode["Status"].asString();
	auto refererConfigNode = domainConfigsNode["RefererConfig"];
	if(!refererConfigNode["ConfigId"].isNull())
		domainConfigs_.refererConfig.configId = refererConfigNode["ConfigId"].asString();
	if(!refererConfigNode["ReferType"].isNull())
		domainConfigs_.refererConfig.referType = refererConfigNode["ReferType"].asString();
	if(!refererConfigNode["ReferList"].isNull())
		domainConfigs_.refererConfig.referList = refererConfigNode["ReferList"].asString();
	if(!refererConfigNode["AllowEmpty"].isNull())
		domainConfigs_.refererConfig.allowEmpty = refererConfigNode["AllowEmpty"].asString();
	if(!refererConfigNode["DisableAst"].isNull())
		domainConfigs_.refererConfig.disableAst = refererConfigNode["DisableAst"].asString();
	if(!refererConfigNode["Status"].isNull())
		domainConfigs_.refererConfig.status = refererConfigNode["Status"].asString();
	auto reqAuthConfigNode = domainConfigsNode["ReqAuthConfig"];
	if(!reqAuthConfigNode["ConfigId"].isNull())
		domainConfigs_.reqAuthConfig.configId = reqAuthConfigNode["ConfigId"].asString();
	if(!reqAuthConfigNode["AuthType"].isNull())
		domainConfigs_.reqAuthConfig.authType = reqAuthConfigNode["AuthType"].asString();
	if(!reqAuthConfigNode["Key1"].isNull())
		domainConfigs_.reqAuthConfig.key1 = reqAuthConfigNode["Key1"].asString();
	if(!reqAuthConfigNode["Key2"].isNull())
		domainConfigs_.reqAuthConfig.key2 = reqAuthConfigNode["Key2"].asString();
	if(!reqAuthConfigNode["Status"].isNull())
		domainConfigs_.reqAuthConfig.status = reqAuthConfigNode["Status"].asString();
	if(!reqAuthConfigNode["AliAuthWhiteList"].isNull())
		domainConfigs_.reqAuthConfig.aliAuthWhiteList = reqAuthConfigNode["AliAuthWhiteList"].asString();
	if(!reqAuthConfigNode["AuthM3u8"].isNull())
		domainConfigs_.reqAuthConfig.authM3u8 = reqAuthConfigNode["AuthM3u8"].asString();
	if(!reqAuthConfigNode["AuthAddr"].isNull())
		domainConfigs_.reqAuthConfig.authAddr = reqAuthConfigNode["AuthAddr"].asString();
	if(!reqAuthConfigNode["AuthRemoteDesc"].isNull())
		domainConfigs_.reqAuthConfig.authRemoteDesc = reqAuthConfigNode["AuthRemoteDesc"].asString();
	if(!reqAuthConfigNode["TimeOut"].isNull())
		domainConfigs_.reqAuthConfig.timeOut = reqAuthConfigNode["TimeOut"].asString();
	auto srcHostConfigNode = domainConfigsNode["SrcHostConfig"];
	if(!srcHostConfigNode["ConfigId"].isNull())
		domainConfigs_.srcHostConfig.configId = srcHostConfigNode["ConfigId"].asString();
	if(!srcHostConfigNode["DomainName"].isNull())
		domainConfigs_.srcHostConfig.domainName = srcHostConfigNode["DomainName"].asString();
	if(!srcHostConfigNode["Status"].isNull())
		domainConfigs_.srcHostConfig.status = srcHostConfigNode["Status"].asString();
	auto videoSeekConfigNode = domainConfigsNode["VideoSeekConfig"];
	if(!videoSeekConfigNode["ConfigId"].isNull())
		domainConfigs_.videoSeekConfig.configId = videoSeekConfigNode["ConfigId"].asString();
	if(!videoSeekConfigNode["Enable"].isNull())
		domainConfigs_.videoSeekConfig.enable = videoSeekConfigNode["Enable"].asString();
	if(!videoSeekConfigNode["Status"].isNull())
		domainConfigs_.videoSeekConfig.status = videoSeekConfigNode["Status"].asString();
	auto wafConfigNode = domainConfigsNode["WafConfig"];
	if(!wafConfigNode["ConfigId"].isNull())
		domainConfigs_.wafConfig.configId = wafConfigNode["ConfigId"].asString();
	if(!wafConfigNode["Enable"].isNull())
		domainConfigs_.wafConfig.enable = wafConfigNode["Enable"].asString();
	if(!wafConfigNode["Status"].isNull())
		domainConfigs_.wafConfig.status = wafConfigNode["Status"].asString();
	auto notifyUrlConfigNode = domainConfigsNode["NotifyUrlConfig"];
	if(!notifyUrlConfigNode["Enable"].isNull())
		domainConfigs_.notifyUrlConfig.enable = notifyUrlConfigNode["Enable"].asString();
	if(!notifyUrlConfigNode["NotifyUrl"].isNull())
		domainConfigs_.notifyUrlConfig.notifyUrl = notifyUrlConfigNode["NotifyUrl"].asString();
	auto redirectTypeConfigNode = domainConfigsNode["RedirectTypeConfig"];
	if(!redirectTypeConfigNode["RedirectType"].isNull())
		domainConfigs_.redirectTypeConfig.redirectType = redirectTypeConfigNode["RedirectType"].asString();
	auto forwardSchemeConfigNode = domainConfigsNode["ForwardSchemeConfig"];
	if(!forwardSchemeConfigNode["ConfigId"].isNull())
		domainConfigs_.forwardSchemeConfig.configId = forwardSchemeConfigNode["ConfigId"].asString();
	if(!forwardSchemeConfigNode["Enable"].isNull())
		domainConfigs_.forwardSchemeConfig.enable = forwardSchemeConfigNode["Enable"].asString();
	if(!forwardSchemeConfigNode["SchemeOrigin"].isNull())
		domainConfigs_.forwardSchemeConfig.schemeOrigin = forwardSchemeConfigNode["SchemeOrigin"].asString();
	if(!forwardSchemeConfigNode["SchemeOriginPort"].isNull())
		domainConfigs_.forwardSchemeConfig.schemeOriginPort = forwardSchemeConfigNode["SchemeOriginPort"].asString();
	if(!forwardSchemeConfigNode["Status"].isNull())
		domainConfigs_.forwardSchemeConfig.status = forwardSchemeConfigNode["Status"].asString();
	auto removeQueryStringConfigNode = domainConfigsNode["RemoveQueryStringConfig"];
	if(!removeQueryStringConfigNode["AliRemoveArgs"].isNull())
		domainConfigs_.removeQueryStringConfig.aliRemoveArgs = removeQueryStringConfigNode["AliRemoveArgs"].asString();
	if(!removeQueryStringConfigNode["ConfigId"].isNull())
		domainConfigs_.removeQueryStringConfig.configId = removeQueryStringConfigNode["ConfigId"].asString();
	if(!removeQueryStringConfigNode["Status"].isNull())
		domainConfigs_.removeQueryStringConfig.status = removeQueryStringConfigNode["Status"].asString();
	auto l2OssKeyConfigNode = domainConfigsNode["L2OssKeyConfig"];
	if(!l2OssKeyConfigNode["PrivateOssAuth"].isNull())
		domainConfigs_.l2OssKeyConfig.privateOssAuth = l2OssKeyConfigNode["PrivateOssAuth"].asString();
	if(!l2OssKeyConfigNode["ConfigId"].isNull())
		domainConfigs_.l2OssKeyConfig.configId = l2OssKeyConfigNode["ConfigId"].asString();
	if(!l2OssKeyConfigNode["Status"].isNull())
		domainConfigs_.l2OssKeyConfig.status = l2OssKeyConfigNode["Status"].asString();
	auto macServiceConfigNode = domainConfigsNode["MacServiceConfig"];
	if(!macServiceConfigNode["AppList"].isNull())
		domainConfigs_.macServiceConfig.appList = macServiceConfigNode["AppList"].asString();
	if(!macServiceConfigNode["Enabled"].isNull())
		domainConfigs_.macServiceConfig.enabled = macServiceConfigNode["Enabled"].asString();
	if(!macServiceConfigNode["ProcessResult"].isNull())
		domainConfigs_.macServiceConfig.processResult = macServiceConfigNode["ProcessResult"].asString();
	if(!macServiceConfigNode["ConfigId"].isNull())
		domainConfigs_.macServiceConfig.configId = macServiceConfigNode["ConfigId"].asString();
	if(!macServiceConfigNode["Status"].isNull())
		domainConfigs_.macServiceConfig.status = macServiceConfigNode["Status"].asString();
	auto greenManagerConfigNode = domainConfigsNode["GreenManagerConfig"];
	if(!greenManagerConfigNode["Enabled"].isNull())
		domainConfigs_.greenManagerConfig.enabled = greenManagerConfigNode["Enabled"].asString();
	if(!greenManagerConfigNode["ConfigId"].isNull())
		domainConfigs_.greenManagerConfig.configId = greenManagerConfigNode["ConfigId"].asString();
	if(!greenManagerConfigNode["Status"].isNull())
		domainConfigs_.greenManagerConfig.status = greenManagerConfigNode["Status"].asString();
	auto httpsOptionConfigNode = domainConfigsNode["HttpsOptionConfig"];
	if(!httpsOptionConfigNode["Http2"].isNull())
		domainConfigs_.httpsOptionConfig.http2 = httpsOptionConfigNode["Http2"].asString();
	if(!httpsOptionConfigNode["ConfigId"].isNull())
		domainConfigs_.httpsOptionConfig.configId = httpsOptionConfigNode["ConfigId"].asString();
	if(!httpsOptionConfigNode["Status"].isNull())
		domainConfigs_.httpsOptionConfig.status = httpsOptionConfigNode["Status"].asString();
	auto aliBusinessConfigNode = domainConfigsNode["AliBusinessConfig"];
	if(!aliBusinessConfigNode["AliBusinessTable"].isNull())
		domainConfigs_.aliBusinessConfig.aliBusinessTable = aliBusinessConfigNode["AliBusinessTable"].asString();
	if(!aliBusinessConfigNode["AliBusinessType"].isNull())
		domainConfigs_.aliBusinessConfig.aliBusinessType = aliBusinessConfigNode["AliBusinessType"].asString();
	if(!aliBusinessConfigNode["ConfigId"].isNull())
		domainConfigs_.aliBusinessConfig.configId = aliBusinessConfigNode["ConfigId"].asString();
	if(!aliBusinessConfigNode["Status"].isNull())
		domainConfigs_.aliBusinessConfig.status = aliBusinessConfigNode["Status"].asString();
	auto ipAllowListConfigNode = domainConfigsNode["IpAllowListConfig"];
	if(!ipAllowListConfigNode["ConfigId"].isNull())
		domainConfigs_.ipAllowListConfig.configId = ipAllowListConfigNode["ConfigId"].asString();
	if(!ipAllowListConfigNode["IpList"].isNull())
		domainConfigs_.ipAllowListConfig.ipList = ipAllowListConfigNode["IpList"].asString();
	if(!ipAllowListConfigNode["IpAclXfwd"].isNull())
		domainConfigs_.ipAllowListConfig.ipAclXfwd = ipAllowListConfigNode["IpAclXfwd"].asString();
	if(!ipAllowListConfigNode["Status"].isNull())
		domainConfigs_.ipAllowListConfig.status = ipAllowListConfigNode["Status"].asString();

}

DescribeDomainConfigsResult::DomainConfigs DescribeDomainConfigsResult::getDomainConfigs()const
{
	return domainConfigs_;
}

