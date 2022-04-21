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

#include <alibabacloud/sas/model/DescribeUuidsByVulNamesRequest.h>

using AlibabaCloud::Sas::Model::DescribeUuidsByVulNamesRequest;

DescribeUuidsByVulNamesRequest::DescribeUuidsByVulNamesRequest() :
	RpcServiceRequest("sas", "2018-12-03", "DescribeUuidsByVulNames")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeUuidsByVulNamesRequest::~DescribeUuidsByVulNamesRequest()
{}

std::string DescribeUuidsByVulNamesRequest::getStatusList()const
{
	return statusList_;
}

void DescribeUuidsByVulNamesRequest::setStatusList(const std::string& statusList)
{
	statusList_ = statusList;
	setParameter("StatusList", statusList);
}

std::string DescribeUuidsByVulNamesRequest::getTargetType()const
{
	return targetType_;
}

void DescribeUuidsByVulNamesRequest::setTargetType(const std::string& targetType)
{
	targetType_ = targetType;
	setParameter("TargetType", targetType);
}

std::string DescribeUuidsByVulNamesRequest::getRemark()const
{
	return remark_;
}

void DescribeUuidsByVulNamesRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setParameter("Remark", remark);
}

std::string DescribeUuidsByVulNamesRequest::getType()const
{
	return type_;
}

void DescribeUuidsByVulNamesRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string DescribeUuidsByVulNamesRequest::getVpcInstanceIds()const
{
	return vpcInstanceIds_;
}

void DescribeUuidsByVulNamesRequest::setVpcInstanceIds(const std::string& vpcInstanceIds)
{
	vpcInstanceIds_ = vpcInstanceIds;
	setParameter("VpcInstanceIds", vpcInstanceIds);
}

std::vector<std::string> DescribeUuidsByVulNamesRequest::getVulNames()const
{
	return vulNames_;
}

void DescribeUuidsByVulNamesRequest::setVulNames(const std::vector<std::string>& vulNames)
{
	vulNames_ = vulNames;
	for(int dep1 = 0; dep1!= vulNames.size(); dep1++) {
		setParameter("VulNames."+ std::to_string(dep1), vulNames.at(dep1));
	}
}

std::string DescribeUuidsByVulNamesRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeUuidsByVulNamesRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeUuidsByVulNamesRequest::getTag()const
{
	return tag_;
}

void DescribeUuidsByVulNamesRequest::setTag(const std::string& tag)
{
	tag_ = tag;
	setParameter("Tag", tag);
}

std::string DescribeUuidsByVulNamesRequest::getLang()const
{
	return lang_;
}

void DescribeUuidsByVulNamesRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string DescribeUuidsByVulNamesRequest::getLevel()const
{
	return level_;
}

void DescribeUuidsByVulNamesRequest::setLevel(const std::string& level)
{
	level_ = level;
	setParameter("Level", level);
}

long DescribeUuidsByVulNamesRequest::getGroupId()const
{
	return groupId_;
}

void DescribeUuidsByVulNamesRequest::setGroupId(long groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", std::to_string(groupId));
}

std::string DescribeUuidsByVulNamesRequest::getDealed()const
{
	return dealed_;
}

void DescribeUuidsByVulNamesRequest::setDealed(const std::string& dealed)
{
	dealed_ = dealed;
	setParameter("Dealed", dealed);
}

std::string DescribeUuidsByVulNamesRequest::getFieldValue()const
{
	return fieldValue_;
}

void DescribeUuidsByVulNamesRequest::setFieldValue(const std::string& fieldValue)
{
	fieldValue_ = fieldValue;
	setParameter("FieldValue", fieldValue);
}

std::string DescribeUuidsByVulNamesRequest::getFieldName()const
{
	return fieldName_;
}

void DescribeUuidsByVulNamesRequest::setFieldName(const std::string& fieldName)
{
	fieldName_ = fieldName;
	setParameter("FieldName", fieldName);
}

std::string DescribeUuidsByVulNamesRequest::getSearchTags()const
{
	return searchTags_;
}

void DescribeUuidsByVulNamesRequest::setSearchTags(const std::string& searchTags)
{
	searchTags_ = searchTags;
	setParameter("SearchTags", searchTags);
}

std::string DescribeUuidsByVulNamesRequest::getNecessity()const
{
	return necessity_;
}

void DescribeUuidsByVulNamesRequest::setNecessity(const std::string& necessity)
{
	necessity_ = necessity;
	setParameter("Necessity", necessity);
}

