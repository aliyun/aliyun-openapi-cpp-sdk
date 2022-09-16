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

#include <alibabacloud/ecd/model/DescribePolicyGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

DescribePolicyGroupsResult::DescribePolicyGroupsResult() :
	ServiceResult()
{}

DescribePolicyGroupsResult::DescribePolicyGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePolicyGroupsResult::~DescribePolicyGroupsResult()
{}

void DescribePolicyGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDescribePolicyGroupsNode = value["DescribePolicyGroups"]["DescribePolicyGroup"];
	for (auto valueDescribePolicyGroupsDescribePolicyGroup : allDescribePolicyGroupsNode)
	{
		DescribePolicyGroup describePolicyGroupsObject;
		if(!valueDescribePolicyGroupsDescribePolicyGroup["PolicyStatus"].isNull())
			describePolicyGroupsObject.policyStatus = valueDescribePolicyGroupsDescribePolicyGroup["PolicyStatus"].asString();
		if(!valueDescribePolicyGroupsDescribePolicyGroup["Html5Access"].isNull())
			describePolicyGroupsObject.html5Access = valueDescribePolicyGroupsDescribePolicyGroup["Html5Access"].asString();
		if(!valueDescribePolicyGroupsDescribePolicyGroup["WatermarkType"].isNull())
			describePolicyGroupsObject.watermarkType = valueDescribePolicyGroupsDescribePolicyGroup["WatermarkType"].asString();
		if(!valueDescribePolicyGroupsDescribePolicyGroup["PreemptLogin"].isNull())
			describePolicyGroupsObject.preemptLogin = valueDescribePolicyGroupsDescribePolicyGroup["PreemptLogin"].asString();
		if(!valueDescribePolicyGroupsDescribePolicyGroup["WatermarkCustomText"].isNull())
			describePolicyGroupsObject.watermarkCustomText = valueDescribePolicyGroupsDescribePolicyGroup["WatermarkCustomText"].asString();
		if(!valueDescribePolicyGroupsDescribePolicyGroup["Clipboard"].isNull())
			describePolicyGroupsObject.clipboard = valueDescribePolicyGroupsDescribePolicyGroup["Clipboard"].asString();
		if(!valueDescribePolicyGroupsDescribePolicyGroup["DomainList"].isNull())
			describePolicyGroupsObject.domainList = valueDescribePolicyGroupsDescribePolicyGroup["DomainList"].asString();
		if(!valueDescribePolicyGroupsDescribePolicyGroup["PolicyGroupId"].isNull())
			describePolicyGroupsObject.policyGroupId = valueDescribePolicyGroupsDescribePolicyGroup["PolicyGroupId"].asString();
		if(!valueDescribePolicyGroupsDescribePolicyGroup["PrinterRedirection"].isNull())
			describePolicyGroupsObject.printerRedirection = valueDescribePolicyGroupsDescribePolicyGroup["PrinterRedirection"].asString();
		if(!valueDescribePolicyGroupsDescribePolicyGroup["WatermarkTransparency"].isNull())
			describePolicyGroupsObject.watermarkTransparency = valueDescribePolicyGroupsDescribePolicyGroup["WatermarkTransparency"].asString();
		if(!valueDescribePolicyGroupsDescribePolicyGroup["Html5FileTransfer"].isNull())
			describePolicyGroupsObject.html5FileTransfer = valueDescribePolicyGroupsDescribePolicyGroup["Html5FileTransfer"].asString();
		if(!valueDescribePolicyGroupsDescribePolicyGroup["UsbRedirect"].isNull())
			describePolicyGroupsObject.usbRedirect = valueDescribePolicyGroupsDescribePolicyGroup["UsbRedirect"].asString();
		if(!valueDescribePolicyGroupsDescribePolicyGroup["PolicyGroupType"].isNull())
			describePolicyGroupsObject.policyGroupType = valueDescribePolicyGroupsDescribePolicyGroup["PolicyGroupType"].asString();
		if(!valueDescribePolicyGroupsDescribePolicyGroup["Watermark"].isNull())
			describePolicyGroupsObject.watermark = valueDescribePolicyGroupsDescribePolicyGroup["Watermark"].asString();
		if(!valueDescribePolicyGroupsDescribePolicyGroup["VisualQuality"].isNull())
			describePolicyGroupsObject.visualQuality = valueDescribePolicyGroupsDescribePolicyGroup["VisualQuality"].asString();
		if(!valueDescribePolicyGroupsDescribePolicyGroup["EdsCount"].isNull())
			describePolicyGroupsObject.edsCount = std::stoi(valueDescribePolicyGroupsDescribePolicyGroup["EdsCount"].asString());
		if(!valueDescribePolicyGroupsDescribePolicyGroup["Name"].isNull())
			describePolicyGroupsObject.name = valueDescribePolicyGroupsDescribePolicyGroup["Name"].asString();
		if(!valueDescribePolicyGroupsDescribePolicyGroup["LocalDrive"].isNull())
			describePolicyGroupsObject.localDrive = valueDescribePolicyGroupsDescribePolicyGroup["LocalDrive"].asString();
		if(!valueDescribePolicyGroupsDescribePolicyGroup["GpuAcceleration"].isNull())
			describePolicyGroupsObject.gpuAcceleration = valueDescribePolicyGroupsDescribePolicyGroup["GpuAcceleration"].asString();
		if(!valueDescribePolicyGroupsDescribePolicyGroup["Recording"].isNull())
			describePolicyGroupsObject.recording = valueDescribePolicyGroupsDescribePolicyGroup["Recording"].asString();
		if(!valueDescribePolicyGroupsDescribePolicyGroup["RecordingStartTime"].isNull())
			describePolicyGroupsObject.recordingStartTime = valueDescribePolicyGroupsDescribePolicyGroup["RecordingStartTime"].asString();
		if(!valueDescribePolicyGroupsDescribePolicyGroup["RecordingEndTime"].isNull())
			describePolicyGroupsObject.recordingEndTime = valueDescribePolicyGroupsDescribePolicyGroup["RecordingEndTime"].asString();
		if(!valueDescribePolicyGroupsDescribePolicyGroup["RecordingFps"].isNull())
			describePolicyGroupsObject.recordingFps = std::stol(valueDescribePolicyGroupsDescribePolicyGroup["RecordingFps"].asString());
		if(!valueDescribePolicyGroupsDescribePolicyGroup["RecordingExpires"].isNull())
			describePolicyGroupsObject.recordingExpires = std::stol(valueDescribePolicyGroupsDescribePolicyGroup["RecordingExpires"].asString());
		if(!valueDescribePolicyGroupsDescribePolicyGroup["CameraRedirect"].isNull())
			describePolicyGroupsObject.cameraRedirect = valueDescribePolicyGroupsDescribePolicyGroup["CameraRedirect"].asString();
		if(!valueDescribePolicyGroupsDescribePolicyGroup["NetRedirect"].isNull())
			describePolicyGroupsObject.netRedirect = valueDescribePolicyGroupsDescribePolicyGroup["NetRedirect"].asString();
		if(!valueDescribePolicyGroupsDescribePolicyGroup["AppContentProtection"].isNull())
			describePolicyGroupsObject.appContentProtection = valueDescribePolicyGroupsDescribePolicyGroup["AppContentProtection"].asString();
		if(!valueDescribePolicyGroupsDescribePolicyGroup["RecordContent"].isNull())
			describePolicyGroupsObject.recordContent = valueDescribePolicyGroupsDescribePolicyGroup["RecordContent"].asString();
		if(!valueDescribePolicyGroupsDescribePolicyGroup["RecordContentExpires"].isNull())
			describePolicyGroupsObject.recordContentExpires = std::stol(valueDescribePolicyGroupsDescribePolicyGroup["RecordContentExpires"].asString());
		if(!valueDescribePolicyGroupsDescribePolicyGroup["RemoteCoordinate"].isNull())
			describePolicyGroupsObject.remoteCoordinate = valueDescribePolicyGroupsDescribePolicyGroup["RemoteCoordinate"].asString();
		auto allAuthorizeSecurityPolicyRulesNode = valueDescribePolicyGroupsDescribePolicyGroup["AuthorizeSecurityPolicyRules"]["AuthorizeSecurityPolicyRule"];
		for (auto valueDescribePolicyGroupsDescribePolicyGroupAuthorizeSecurityPolicyRulesAuthorizeSecurityPolicyRule : allAuthorizeSecurityPolicyRulesNode)
		{
			DescribePolicyGroup::AuthorizeSecurityPolicyRule authorizeSecurityPolicyRulesObject;
			if(!valueDescribePolicyGroupsDescribePolicyGroupAuthorizeSecurityPolicyRulesAuthorizeSecurityPolicyRule["Type"].isNull())
				authorizeSecurityPolicyRulesObject.type = valueDescribePolicyGroupsDescribePolicyGroupAuthorizeSecurityPolicyRulesAuthorizeSecurityPolicyRule["Type"].asString();
			if(!valueDescribePolicyGroupsDescribePolicyGroupAuthorizeSecurityPolicyRulesAuthorizeSecurityPolicyRule["Policy"].isNull())
				authorizeSecurityPolicyRulesObject.policy = valueDescribePolicyGroupsDescribePolicyGroupAuthorizeSecurityPolicyRulesAuthorizeSecurityPolicyRule["Policy"].asString();
			if(!valueDescribePolicyGroupsDescribePolicyGroupAuthorizeSecurityPolicyRulesAuthorizeSecurityPolicyRule["Description"].isNull())
				authorizeSecurityPolicyRulesObject.description = valueDescribePolicyGroupsDescribePolicyGroupAuthorizeSecurityPolicyRulesAuthorizeSecurityPolicyRule["Description"].asString();
			if(!valueDescribePolicyGroupsDescribePolicyGroupAuthorizeSecurityPolicyRulesAuthorizeSecurityPolicyRule["PortRange"].isNull())
				authorizeSecurityPolicyRulesObject.portRange = valueDescribePolicyGroupsDescribePolicyGroupAuthorizeSecurityPolicyRulesAuthorizeSecurityPolicyRule["PortRange"].asString();
			if(!valueDescribePolicyGroupsDescribePolicyGroupAuthorizeSecurityPolicyRulesAuthorizeSecurityPolicyRule["IpProtocol"].isNull())
				authorizeSecurityPolicyRulesObject.ipProtocol = valueDescribePolicyGroupsDescribePolicyGroupAuthorizeSecurityPolicyRulesAuthorizeSecurityPolicyRule["IpProtocol"].asString();
			if(!valueDescribePolicyGroupsDescribePolicyGroupAuthorizeSecurityPolicyRulesAuthorizeSecurityPolicyRule["Priority"].isNull())
				authorizeSecurityPolicyRulesObject.priority = valueDescribePolicyGroupsDescribePolicyGroupAuthorizeSecurityPolicyRulesAuthorizeSecurityPolicyRule["Priority"].asString();
			if(!valueDescribePolicyGroupsDescribePolicyGroupAuthorizeSecurityPolicyRulesAuthorizeSecurityPolicyRule["CidrIp"].isNull())
				authorizeSecurityPolicyRulesObject.cidrIp = valueDescribePolicyGroupsDescribePolicyGroupAuthorizeSecurityPolicyRulesAuthorizeSecurityPolicyRule["CidrIp"].asString();
			describePolicyGroupsObject.authorizeSecurityPolicyRules.push_back(authorizeSecurityPolicyRulesObject);
		}
		auto allAuthorizeAccessPolicyRulesNode = valueDescribePolicyGroupsDescribePolicyGroup["AuthorizeAccessPolicyRules"]["AuthorizeAccessPolicyRule"];
		for (auto valueDescribePolicyGroupsDescribePolicyGroupAuthorizeAccessPolicyRulesAuthorizeAccessPolicyRule : allAuthorizeAccessPolicyRulesNode)
		{
			DescribePolicyGroup::AuthorizeAccessPolicyRule authorizeAccessPolicyRulesObject;
			if(!valueDescribePolicyGroupsDescribePolicyGroupAuthorizeAccessPolicyRulesAuthorizeAccessPolicyRule["Description"].isNull())
				authorizeAccessPolicyRulesObject.description = valueDescribePolicyGroupsDescribePolicyGroupAuthorizeAccessPolicyRulesAuthorizeAccessPolicyRule["Description"].asString();
			if(!valueDescribePolicyGroupsDescribePolicyGroupAuthorizeAccessPolicyRulesAuthorizeAccessPolicyRule["CidrIp"].isNull())
				authorizeAccessPolicyRulesObject.cidrIp = valueDescribePolicyGroupsDescribePolicyGroupAuthorizeAccessPolicyRulesAuthorizeAccessPolicyRule["CidrIp"].asString();
			describePolicyGroupsObject.authorizeAccessPolicyRules.push_back(authorizeAccessPolicyRulesObject);
		}
		auto allClientTypesNode = valueDescribePolicyGroupsDescribePolicyGroup["ClientTypes"]["ClientType"];
		for (auto valueDescribePolicyGroupsDescribePolicyGroupClientTypesClientType : allClientTypesNode)
		{
			DescribePolicyGroup::ClientType clientTypesObject;
			if(!valueDescribePolicyGroupsDescribePolicyGroupClientTypesClientType["Status"].isNull())
				clientTypesObject.status = valueDescribePolicyGroupsDescribePolicyGroupClientTypesClientType["Status"].asString();
			if(!valueDescribePolicyGroupsDescribePolicyGroupClientTypesClientType["ClientType"].isNull())
				clientTypesObject.clientType = valueDescribePolicyGroupsDescribePolicyGroupClientTypesClientType["ClientType"].asString();
			describePolicyGroupsObject.clientTypes.push_back(clientTypesObject);
		}
		auto allUsbSupplyRedirectRuleNode = valueDescribePolicyGroupsDescribePolicyGroup["UsbSupplyRedirectRule"]["UsbSupplyRedirectRuleItem"];
		for (auto valueDescribePolicyGroupsDescribePolicyGroupUsbSupplyRedirectRuleUsbSupplyRedirectRuleItem : allUsbSupplyRedirectRuleNode)
		{
			DescribePolicyGroup::UsbSupplyRedirectRuleItem usbSupplyRedirectRuleObject;
			if(!valueDescribePolicyGroupsDescribePolicyGroupUsbSupplyRedirectRuleUsbSupplyRedirectRuleItem["VendorId"].isNull())
				usbSupplyRedirectRuleObject.vendorId = valueDescribePolicyGroupsDescribePolicyGroupUsbSupplyRedirectRuleUsbSupplyRedirectRuleItem["VendorId"].asString();
			if(!valueDescribePolicyGroupsDescribePolicyGroupUsbSupplyRedirectRuleUsbSupplyRedirectRuleItem["ProductId"].isNull())
				usbSupplyRedirectRuleObject.productId = valueDescribePolicyGroupsDescribePolicyGroupUsbSupplyRedirectRuleUsbSupplyRedirectRuleItem["ProductId"].asString();
			if(!valueDescribePolicyGroupsDescribePolicyGroupUsbSupplyRedirectRuleUsbSupplyRedirectRuleItem["Description"].isNull())
				usbSupplyRedirectRuleObject.description = valueDescribePolicyGroupsDescribePolicyGroupUsbSupplyRedirectRuleUsbSupplyRedirectRuleItem["Description"].asString();
			if(!valueDescribePolicyGroupsDescribePolicyGroupUsbSupplyRedirectRuleUsbSupplyRedirectRuleItem["UsbRedirectType"].isNull())
				usbSupplyRedirectRuleObject.usbRedirectType = std::stol(valueDescribePolicyGroupsDescribePolicyGroupUsbSupplyRedirectRuleUsbSupplyRedirectRuleItem["UsbRedirectType"].asString());
			if(!valueDescribePolicyGroupsDescribePolicyGroupUsbSupplyRedirectRuleUsbSupplyRedirectRuleItem["DeviceClass"].isNull())
				usbSupplyRedirectRuleObject.deviceClass = valueDescribePolicyGroupsDescribePolicyGroupUsbSupplyRedirectRuleUsbSupplyRedirectRuleItem["DeviceClass"].asString();
			if(!valueDescribePolicyGroupsDescribePolicyGroupUsbSupplyRedirectRuleUsbSupplyRedirectRuleItem["DeviceSubclass"].isNull())
				usbSupplyRedirectRuleObject.deviceSubclass = valueDescribePolicyGroupsDescribePolicyGroupUsbSupplyRedirectRuleUsbSupplyRedirectRuleItem["DeviceSubclass"].asString();
			if(!valueDescribePolicyGroupsDescribePolicyGroupUsbSupplyRedirectRuleUsbSupplyRedirectRuleItem["UsbRuleType"].isNull())
				usbSupplyRedirectRuleObject.usbRuleType = std::stol(valueDescribePolicyGroupsDescribePolicyGroupUsbSupplyRedirectRuleUsbSupplyRedirectRuleItem["UsbRuleType"].asString());
			describePolicyGroupsObject.usbSupplyRedirectRule.push_back(usbSupplyRedirectRuleObject);
		}
		auto allPreemptLoginUsers = value["PreemptLoginUsers"]["PreemptLoginUser"];
		for (auto value : allPreemptLoginUsers)
			describePolicyGroupsObject.preemptLoginUsers.push_back(value.asString());
		describePolicyGroups_.push_back(describePolicyGroupsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string DescribePolicyGroupsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<DescribePolicyGroupsResult::DescribePolicyGroup> DescribePolicyGroupsResult::getDescribePolicyGroups()const
{
	return describePolicyGroups_;
}

