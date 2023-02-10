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

#ifndef ALIBABACLOUD_SAS_MODEL_LISTPODRISKREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_LISTPODRISKREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT ListPodRiskRequest : public RpcServiceRequest {
public:
	ListPodRiskRequest();
	~ListPodRiskRequest();
	std::string getPodName() const;
	void setPodName(const std::string &podName);
	std::string getAppName() const;
	void setAppName(const std::string &appName);
	long getPageSize() const;
	void setPageSize(long pageSize);
	long getCurrentPage() const;
	void setCurrentPage(long currentPage);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	std::string get_Namespace() const;
	void set_Namespace(const std::string &_namespace);

private:
	std::string podName_;
	std::string appName_;
	long pageSize_;
	long currentPage_;
	std::string clusterId_;
	std::string _namespace_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_LISTPODRISKREQUEST_H_
