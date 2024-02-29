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

#ifndef ALIBABACLOUD_SDDP_MODEL_DESCRIBEPARENTINSTANCEREQUEST_H_
#define ALIBABACLOUD_SDDP_MODEL_DESCRIBEPARENTINSTANCEREQUEST_H_

#include <alibabacloud/sddp/SddpExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sddp {
namespace Model {
class ALIBABACLOUD_SDDP_EXPORT DescribeParentInstanceRequest : public RpcServiceRequest {
public:
	DescribeParentInstanceRequest();
	~DescribeParentInstanceRequest();
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	int getPageSize() const;
	void setPageSize(int pageSize);
	int getCheckStatus() const;
	void setCheckStatus(int checkStatus);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::string getServiceRegionId() const;
	void setServiceRegionId(const std::string &serviceRegionId);
	std::string getEngineType() const;
	void setEngineType(const std::string &engineType);
	std::string getClusterStatus() const;
	void setClusterStatus(const std::string &clusterStatus);
	int getAuthStatus() const;
	void setAuthStatus(int authStatus);
	int getFeatureType() const;
	void setFeatureType(int featureType);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	long getResourceType() const;
	void setResourceType(long resourceType);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getDbName() const;
	void setDbName(const std::string &dbName);

private:
	std::string sourceIp_;
	int pageSize_;
	int checkStatus_;
	std::string lang_;
	std::string serviceRegionId_;
	std::string engineType_;
	std::string clusterStatus_;
	int authStatus_;
	int featureType_;
	int currentPage_;
	long resourceType_;
	std::string instanceId_;
	std::string dbName_;
};
} // namespace Model
} // namespace Sddp
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SDDP_MODEL_DESCRIBEPARENTINSTANCEREQUEST_H_
