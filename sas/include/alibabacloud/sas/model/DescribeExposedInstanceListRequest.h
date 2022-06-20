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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEEXPOSEDINSTANCELISTREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEEXPOSEDINSTANCELISTREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT DescribeExposedInstanceListRequest : public RpcServiceRequest {
public:
	DescribeExposedInstanceListRequest();
	~DescribeExposedInstanceListRequest();
	std::string getExposurePort() const;
	void setExposurePort(const std::string &exposurePort);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	int getPageSize() const;
	void setPageSize(int pageSize);
	bool getVulStatus() const;
	void setVulStatus(bool vulStatus);
	std::string getExposureIp() const;
	void setExposureIp(const std::string &exposureIp);
	long getGroupId() const;
	void setGroupId(long groupId);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::string getExposureComponent() const;
	void setExposureComponent(const std::string &exposureComponent);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getInstanceName() const;
	void setInstanceName(const std::string &instanceName);
	bool getHealthStatus() const;
	void setHealthStatus(bool healthStatus);

private:
	std::string exposurePort_;
	std::string sourceIp_;
	int pageSize_;
	bool vulStatus_;
	std::string exposureIp_;
	long groupId_;
	int currentPage_;
	std::string exposureComponent_;
	std::string instanceId_;
	std::string instanceName_;
	bool healthStatus_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEEXPOSEDINSTANCELISTREQUEST_H_
