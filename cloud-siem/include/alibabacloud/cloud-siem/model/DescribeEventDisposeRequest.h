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

#ifndef ALIBABACLOUD_CLOUD_SIEM_MODEL_DESCRIBEEVENTDISPOSEREQUEST_H_
#define ALIBABACLOUD_CLOUD_SIEM_MODEL_DESCRIBEEVENTDISPOSEREQUEST_H_

#include <alibabacloud/cloud-siem/Cloud_siemExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cloud_siem {
namespace Model {
class ALIBABACLOUD_CLOUD_SIEM_EXPORT DescribeEventDisposeRequest : public RpcServiceRequest {
public:
	DescribeEventDisposeRequest();
	~DescribeEventDisposeRequest();
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::string getIncidentUuid() const;
	void setIncidentUuid(const std::string &incidentUuid);

private:
	std::string regionId_;
	int pageSize_;
	int currentPage_;
	std::string incidentUuid_;
};
} // namespace Model
} // namespace Cloud_siem
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CLOUD_SIEM_MODEL_DESCRIBEEVENTDISPOSEREQUEST_H_
