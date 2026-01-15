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

#include <alibabacloud/websitebuild/model/ListAppInstanceDomainsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::WebsiteBuild;
using namespace AlibabaCloud::WebsiteBuild::Model;

ListAppInstanceDomainsResult::ListAppInstanceDomainsResult() :
	ServiceResult()
{}

ListAppInstanceDomainsResult::ListAppInstanceDomainsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAppInstanceDomainsResult::~ListAppInstanceDomainsResult()
{}

void ListAppInstanceDomainsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto moduleNode = value["Module"];
	if(!moduleNode["TotalItemNum"].isNull())
		module_.totalItemNum = std::stoi(moduleNode["TotalItemNum"].asString());
	if(!moduleNode["CurrentPageNum"].isNull())
		module_.currentPageNum = std::stoi(moduleNode["CurrentPageNum"].asString());
	if(!moduleNode["PageSize"].isNull())
		module_.pageSize = std::stoi(moduleNode["PageSize"].asString());
	if(!moduleNode["TotalPageNum"].isNull())
		module_.totalPageNum = std::stoi(moduleNode["TotalPageNum"].asString());
	if(!moduleNode["PrePage"].isNull())
		module_.prePage = moduleNode["PrePage"].asString() == "true";
	if(!moduleNode["NextPage"].isNull())
		module_.nextPage = moduleNode["NextPage"].asString() == "true";
	if(!moduleNode["ResultLimit"].isNull())
		module_.resultLimit = moduleNode["ResultLimit"].asString() == "true";
	auto allDataNode = moduleNode["Data"]["DataItem"];
	for (auto moduleNodeDataDataItem : allDataNode)
	{
		Module::DataItem dataItemObject;
		if(!moduleNodeDataDataItem["DomainName"].isNull())
			dataItemObject.domainName = moduleNodeDataDataItem["DomainName"].asString();
		if(!moduleNodeDataDataItem["CreateTime"].isNull())
			dataItemObject.createTime = moduleNodeDataDataItem["CreateTime"].asString();
		if(!moduleNodeDataDataItem["OverallStatus"].isNull())
			dataItemObject.overallStatus = moduleNodeDataDataItem["OverallStatus"].asString();
		auto verificationNode = value["Verification"];
		if(!verificationNode["VerificationStatus"].isNull())
			dataItemObject.verification.verificationStatus = verificationNode["VerificationStatus"].asString();
		if(!verificationNode["ErrorMsg"].isNull())
			dataItemObject.verification.errorMsg = verificationNode["ErrorMsg"].asString();
		if(!verificationNode["VerificationStatusCode"].isNull())
			dataItemObject.verification.verificationStatusCode = verificationNode["VerificationStatusCode"].asString();
		auto dnsRecordNode = verificationNode["DnsRecord"];
		if(!dnsRecordNode["RecordType"].isNull())
			dataItemObject.verification.dnsRecord.recordType = dnsRecordNode["RecordType"].asString();
		if(!dnsRecordNode["Host"].isNull())
			dataItemObject.verification.dnsRecord.host = dnsRecordNode["Host"].asString();
		if(!dnsRecordNode["Value"].isNull())
			dataItemObject.verification.dnsRecord.value = dnsRecordNode["Value"].asString();
		auto resolutionNode = value["Resolution"];
		if(!resolutionNode["ResolutionStatus"].isNull())
			dataItemObject.resolution.resolutionStatus = resolutionNode["ResolutionStatus"].asString();
		if(!resolutionNode["ErrorMsg"].isNull())
			dataItemObject.resolution.errorMsg = resolutionNode["ErrorMsg"].asString();
		auto dnsRecord1Node = resolutionNode["DnsRecord"];
		if(!dnsRecord1Node["RecordType"].isNull())
			dataItemObject.resolution.dnsRecord1.recordType = dnsRecord1Node["RecordType"].asString();
		if(!dnsRecord1Node["Host"].isNull())
			dataItemObject.resolution.dnsRecord1.host = dnsRecord1Node["Host"].asString();
		if(!dnsRecord1Node["Value"].isNull())
			dataItemObject.resolution.dnsRecord1.value = dnsRecord1Node["Value"].asString();
		auto certificateNode = value["Certificate"];
		if(!certificateNode["CertificateStatus"].isNull())
			dataItemObject.certificate.certificateStatus = certificateNode["CertificateStatus"].asString();
		if(!certificateNode["CertificateType"].isNull())
			dataItemObject.certificate.certificateType = certificateNode["CertificateType"].asString();
		if(!certificateNode["CertificateName"].isNull())
			dataItemObject.certificate.certificateName = certificateNode["CertificateName"].asString();
		if(!certificateNode["EndTime"].isNull())
			dataItemObject.certificate.endTime = certificateNode["EndTime"].asString();
		auto ownershipNode = value["Ownership"];
		if(!ownershipNode["Account"].isNull())
			dataItemObject.ownership.account = ownershipNode["Account"].asString();
		if(!ownershipNode["Provider"].isNull())
			dataItemObject.ownership.provider = ownershipNode["Provider"].asString();
		if(!ownershipNode["RootDomain"].isNull())
			dataItemObject.ownership.rootDomain = ownershipNode["RootDomain"].asString();
		module_.data.push_back(dataItemObject);
	}
	auto nextNode = moduleNode["Next"];
	if(!nextNode["DomainName"].isNull())
		module_.next.domainName = nextNode["DomainName"].asString();
	if(!nextNode["CreateTime"].isNull())
		module_.next.createTime = nextNode["CreateTime"].asString();
	if(!nextNode["OverallStatus"].isNull())
		module_.next.overallStatus = nextNode["OverallStatus"].asString();
	auto verification2Node = nextNode["Verification"];
	if(!verification2Node["VerificationStatus"].isNull())
		module_.next.verification2.verificationStatus = verification2Node["VerificationStatus"].asString();
	if(!verification2Node["ErrorMsg"].isNull())
		module_.next.verification2.errorMsg = verification2Node["ErrorMsg"].asString();
	auto dnsRecord6Node = verification2Node["DnsRecord"];
	if(!dnsRecord6Node["RecordType"].isNull())
		module_.next.verification2.dnsRecord6.recordType = dnsRecord6Node["RecordType"].asString();
	if(!dnsRecord6Node["Host"].isNull())
		module_.next.verification2.dnsRecord6.host = dnsRecord6Node["Host"].asString();
	if(!dnsRecord6Node["Value"].isNull())
		module_.next.verification2.dnsRecord6.value = dnsRecord6Node["Value"].asString();
	auto resolution3Node = nextNode["Resolution"];
	if(!resolution3Node["ResolutionStatus"].isNull())
		module_.next.resolution3.resolutionStatus = resolution3Node["ResolutionStatus"].asString();
	if(!resolution3Node["ErrorMsg"].isNull())
		module_.next.resolution3.errorMsg = resolution3Node["ErrorMsg"].asString();
	auto dnsRecord7Node = resolution3Node["DnsRecord"];
	if(!dnsRecord7Node["RecordType"].isNull())
		module_.next.resolution3.dnsRecord7.recordType = dnsRecord7Node["RecordType"].asString();
	if(!dnsRecord7Node["Host"].isNull())
		module_.next.resolution3.dnsRecord7.host = dnsRecord7Node["Host"].asString();
	if(!dnsRecord7Node["Value"].isNull())
		module_.next.resolution3.dnsRecord7.value = dnsRecord7Node["Value"].asString();
	auto certificate4Node = nextNode["Certificate"];
	if(!certificate4Node["CertificateStatus"].isNull())
		module_.next.certificate4.certificateStatus = certificate4Node["CertificateStatus"].asString();
	if(!certificate4Node["CertificateType"].isNull())
		module_.next.certificate4.certificateType = certificate4Node["CertificateType"].asString();
	if(!certificate4Node["CertificateName"].isNull())
		module_.next.certificate4.certificateName = certificate4Node["CertificateName"].asString();
	if(!certificate4Node["EndTime"].isNull())
		module_.next.certificate4.endTime = certificate4Node["EndTime"].asString();
	auto ownership5Node = nextNode["Ownership"];
	if(!ownership5Node["Account"].isNull())
		module_.next.ownership5.account = ownership5Node["Account"].asString();
	if(!ownership5Node["Provider"].isNull())
		module_.next.ownership5.provider = ownership5Node["Provider"].asString();
	auto allErrorArgs = value["ErrorArgs"]["ErrorArg"];
	for (const auto &item : allErrorArgs)
		errorArgs_.push_back(item.asString());
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["Synchro"].isNull())
		synchro_ = value["Synchro"].asString() == "true";
	if(!value["AccessDeniedDetail"].isNull())
		accessDeniedDetail_ = value["AccessDeniedDetail"].asString();
	if(!value["RootErrorMsg"].isNull())
		rootErrorMsg_ = value["RootErrorMsg"].asString();
	if(!value["RootErrorCode"].isNull())
		rootErrorCode_ = value["RootErrorCode"].asString();
	if(!value["AllowRetry"].isNull())
		allowRetry_ = value["AllowRetry"].asString() == "true";
	if(!value["AppName"].isNull())
		appName_ = value["AppName"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string ListAppInstanceDomainsResult::getRootErrorMsg()const
{
	return rootErrorMsg_;
}

std::string ListAppInstanceDomainsResult::getAccessDeniedDetail()const
{
	return accessDeniedDetail_;
}

bool ListAppInstanceDomainsResult::getAllowRetry()const
{
	return allowRetry_;
}

std::string ListAppInstanceDomainsResult::getNextToken()const
{
	return nextToken_;
}

bool ListAppInstanceDomainsResult::getSynchro()const
{
	return synchro_;
}

int ListAppInstanceDomainsResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<std::string> ListAppInstanceDomainsResult::getErrorArgs()const
{
	return errorArgs_;
}

std::string ListAppInstanceDomainsResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string ListAppInstanceDomainsResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

ListAppInstanceDomainsResult::Module ListAppInstanceDomainsResult::getModule()const
{
	return module_;
}

std::string ListAppInstanceDomainsResult::getRootErrorCode()const
{
	return rootErrorCode_;
}

std::string ListAppInstanceDomainsResult::getAppName()const
{
	return appName_;
}

