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

#ifndef ALIBABACLOUD_CMS_MODEL_PUTHYBRIDMONITORMETRICDATAREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_PUTHYBRIDMONITORMETRICDATAREQUEST_H_

#include <alibabacloud/cms/CmsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cms {
namespace Model {
class ALIBABACLOUD_CMS_EXPORT PutHybridMonitorMetricDataRequest : public RpcServiceRequest {
public:
	struct MetricList {
		std::string name;
		std::string value;
		struct Labels {
			std::string value;
			std::string key;
		};
		std::vector<Labels> labels;
		long tS;
	};
	PutHybridMonitorMetricDataRequest();
	~PutHybridMonitorMetricDataRequest();
	std::vector<MetricList> getMetricList() const;
	void setMetricList(const std::vector<MetricList> &metricList);
	std::string get_Namespace() const;
	void set_Namespace(const std::string &_namespace);

private:
	std::vector<MetricList> metricList_;
	std::string _namespace_;
};
} // namespace Model
} // namespace Cms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CMS_MODEL_PUTHYBRIDMONITORMETRICDATAREQUEST_H_
