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

#ifndef ALIBABACLOUD_POLARDB_MODEL_ENABLEDBCLUSTERSERVERLESSREQUEST_H_
#define ALIBABACLOUD_POLARDB_MODEL_ENABLEDBCLUSTERSERVERLESSREQUEST_H_

#include <alibabacloud/polardb/PolardbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Polardb {
namespace Model {
class ALIBABACLOUD_POLARDB_EXPORT EnableDBClusterServerlessRequest : public RpcServiceRequest {
public:
	EnableDBClusterServerlessRequest();
	~EnableDBClusterServerlessRequest();
	std::string getScaleRoNumMax() const;
	void setScaleRoNumMax(const std::string &scaleRoNumMax);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getScaleApRoNumMax() const;
	void setScaleApRoNumMax(const std::string &scaleApRoNumMax);
	std::string getScaleMax() const;
	void setScaleMax(const std::string &scaleMax);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getScaleApRoNumMin() const;
	void setScaleApRoNumMin(const std::string &scaleApRoNumMin);
	std::string getScaleMin() const;
	void setScaleMin(const std::string &scaleMin);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getDBClusterId() const;
	void setDBClusterId(const std::string &dBClusterId);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getScaleRoNumMin() const;
	void setScaleRoNumMin(const std::string &scaleRoNumMin);

private:
	std::string scaleRoNumMax_;
	long resourceOwnerId_;
	std::string scaleApRoNumMax_;
	std::string scaleMax_;
	std::string accessKeyId_;
	std::string scaleApRoNumMin_;
	std::string scaleMin_;
	std::string resourceOwnerAccount_;
	std::string dBClusterId_;
	std::string ownerAccount_;
	long ownerId_;
	std::string scaleRoNumMin_;
};
} // namespace Model
} // namespace Polardb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_POLARDB_MODEL_ENABLEDBCLUSTERSERVERLESSREQUEST_H_
