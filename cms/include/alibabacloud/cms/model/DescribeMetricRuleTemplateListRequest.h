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

#ifndef ALIBABACLOUD_CMS_MODEL_DESCRIBEMETRICRULETEMPLATELISTREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_DESCRIBEMETRICRULETEMPLATELISTREQUEST_H_

#include <alibabacloud/cms/CmsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cms {
namespace Model {
class ALIBABACLOUD_CMS_EXPORT DescribeMetricRuleTemplateListRequest : public RpcServiceRequest {
public:
	DescribeMetricRuleTemplateListRequest();
	~DescribeMetricRuleTemplateListRequest();
	bool getHistory() const;
	void setHistory(bool history);
	long getTemplateId() const;
	void setTemplateId(long templateId);
	long getPageNumber() const;
	void setPageNumber(long pageNumber);
	std::string getName() const;
	void setName(const std::string &name);
	long getPageSize() const;
	void setPageSize(long pageSize);
	std::string getKeyword() const;
	void setKeyword(const std::string &keyword);

private:
	bool history_;
	long templateId_;
	long pageNumber_;
	std::string name_;
	long pageSize_;
	std::string keyword_;
};
} // namespace Model
} // namespace Cms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CMS_MODEL_DESCRIBEMETRICRULETEMPLATELISTREQUEST_H_
