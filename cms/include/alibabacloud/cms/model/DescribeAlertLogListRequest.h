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

#ifndef ALIBABACLOUD_CMS_MODEL_DESCRIBEALERTLOGLISTREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_DESCRIBEALERTLOGLISTREQUEST_H_

#include <alibabacloud/cms/CmsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cms {
namespace Model {
class ALIBABACLOUD_CMS_EXPORT DescribeAlertLogListRequest : public RpcServiceRequest {
public:
	DescribeAlertLogListRequest();
	~DescribeAlertLogListRequest();
	std::string getSendStatus() const;
	void setSendStatus(const std::string &sendStatus);
	std::string getContactGroup() const;
	void setContactGroup(const std::string &contactGroup);
	std::string getSearchKey() const;
	void setSearchKey(const std::string &searchKey);
	std::string getRuleName() const;
	void setRuleName(const std::string &ruleName);
	long getStartTime() const;
	void setStartTime(long startTime);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getLastMin() const;
	void setLastMin(const std::string &lastMin);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getMetricName() const;
	void setMetricName(const std::string &metricName);
	std::string getProduct() const;
	void setProduct(const std::string &product);
	std::string getLevel() const;
	void setLevel(const std::string &level);
	std::string getGroupId() const;
	void setGroupId(const std::string &groupId);
	long getEndTime() const;
	void setEndTime(long endTime);
	std::string getGroupBy() const;
	void setGroupBy(const std::string &groupBy);
	std::string get_Namespace() const;
	void set_Namespace(const std::string &_namespace);
	std::string getRuleId() const;
	void setRuleId(const std::string &ruleId);

private:
	std::string sendStatus_;
	std::string contactGroup_;
	std::string searchKey_;
	std::string ruleName_;
	long startTime_;
	int pageNumber_;
	std::string lastMin_;
	int pageSize_;
	std::string metricName_;
	std::string product_;
	std::string level_;
	std::string groupId_;
	long endTime_;
	std::string groupBy_;
	std::string _namespace_;
	std::string ruleId_;
};
} // namespace Model
} // namespace Cms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CMS_MODEL_DESCRIBEALERTLOGLISTREQUEST_H_
