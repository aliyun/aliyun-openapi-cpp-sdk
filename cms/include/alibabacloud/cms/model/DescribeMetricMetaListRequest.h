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

#ifndef ALIBABACLOUD_CMS_MODEL_DESCRIBEMETRICMETALISTREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_DESCRIBEMETRICMETALISTREQUEST_H_

#include <alibabacloud/cms/CmsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cms {
namespace Model {
class ALIBABACLOUD_CMS_EXPORT DescribeMetricMetaListRequest : public RpcServiceRequest {
public:
	DescribeMetricMetaListRequest();
	~DescribeMetricMetaListRequest();
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getLabels() const;
	void setLabels(const std::string &labels);
	std::string get_Namespace() const;
	void set_Namespace(const std::string &_namespace);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getMetricName() const;
	void setMetricName(const std::string &metricName);

private:
	int pageNumber_;
	std::string labels_;
	std::string _namespace_;
	int pageSize_;
	std::string metricName_;
};
} // namespace Model
} // namespace Cms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CMS_MODEL_DESCRIBEMETRICMETALISTREQUEST_H_
