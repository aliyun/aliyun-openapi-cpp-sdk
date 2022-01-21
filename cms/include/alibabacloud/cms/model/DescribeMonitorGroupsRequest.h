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

#ifndef ALIBABACLOUD_CMS_MODEL_DESCRIBEMONITORGROUPSREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_DESCRIBEMONITORGROUPSREQUEST_H_

#include <alibabacloud/cms/CmsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cms {
namespace Model {
class ALIBABACLOUD_CMS_EXPORT DescribeMonitorGroupsRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	DescribeMonitorGroupsRequest();
	~DescribeMonitorGroupsRequest();
	bool getSelectContactGroups() const;
	void setSelectContactGroups(bool selectContactGroups);
	bool getIncludeTemplateHistory() const;
	void setIncludeTemplateHistory(bool includeTemplateHistory);
	std::string getDynamicTagRuleId() const;
	void setDynamicTagRuleId(const std::string &dynamicTagRuleId);
	std::string getType() const;
	void setType(const std::string &type);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getGroupFounderTagKey() const;
	void setGroupFounderTagKey(const std::string &groupFounderTagKey);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getGroupFounderTagValue() const;
	void setGroupFounderTagValue(const std::string &groupFounderTagValue);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getKeyword() const;
	void setKeyword(const std::string &keyword);
	std::string getGroupId() const;
	void setGroupId(const std::string &groupId);
	std::string getGroupName() const;
	void setGroupName(const std::string &groupName);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getServiceId() const;
	void setServiceId(const std::string &serviceId);

private:
	bool selectContactGroups_;
	bool includeTemplateHistory_;
	std::string dynamicTagRuleId_;
	std::string type_;
	int pageNumber_;
	std::string resourceGroupId_;
	std::string groupFounderTagKey_;
	int pageSize_;
	std::string groupFounderTagValue_;
	std::vector<Tag> tag_;
	std::string keyword_;
	std::string groupId_;
	std::string groupName_;
	std::string instanceId_;
	std::string serviceId_;
};
} // namespace Model
} // namespace Cms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CMS_MODEL_DESCRIBEMONITORGROUPSREQUEST_H_
