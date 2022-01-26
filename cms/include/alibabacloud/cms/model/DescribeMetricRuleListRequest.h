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

#ifndef ALIBABACLOUD_CMS_MODEL_DESCRIBEMETRICRULELISTREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_DESCRIBEMETRICRULELISTREQUEST_H_

#include <alibabacloud/cms/CmsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cms {
namespace Model {
class ALIBABACLOUD_CMS_EXPORT DescribeMetricRuleListRequest : public RpcServiceRequest {
public:
	DescribeMetricRuleListRequest();
	~DescribeMetricRuleListRequest();
	bool getEnableState() const;
	void setEnableState(bool enableState);
	std::string getRuleName() const;
	void setRuleName(const std::string &ruleName);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getMetricName() const;
	void setMetricName(const std::string &metricName);
	std::string getGroupId() const;
	void setGroupId(const std::string &groupId);
	std::string getGroupBy() const;
	void setGroupBy(const std::string &groupBy);
	std::string getRuleIds() const;
	void setRuleIds(const std::string &ruleIds);
	std::string get_Namespace() const;
	void set_Namespace(const std::string &_namespace);
	std::string getAlertState() const;
	void setAlertState(const std::string &alertState);
	int getPage() const;
	void setPage(int page);
	std::string getDimensions() const;
	void setDimensions(const std::string &dimensions);

private:
	bool enableState_;
	std::string ruleName_;
	int pageSize_;
	std::string metricName_;
	std::string groupId_;
	std::string groupBy_;
	std::string ruleIds_;
	std::string _namespace_;
	std::string alertState_;
	int page_;
	std::string dimensions_;
};
} // namespace Model
} // namespace Cms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CMS_MODEL_DESCRIBEMETRICRULELISTREQUEST_H_
