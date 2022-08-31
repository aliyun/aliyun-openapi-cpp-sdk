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

#ifndef ALIBABACLOUD_RDS_MODEL_MODIFYDBPROXYINSTANCESSLREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_MODIFYDBPROXYINSTANCESSLREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT ModifyDbProxyInstanceSslRequest : public RpcServiceRequest {
public:
	ModifyDbProxyInstanceSslRequest();
	~ModifyDbProxyInstanceSslRequest();
	std::string getDbProxySslEnabled() const;
	void setDbProxySslEnabled(const std::string &dbProxySslEnabled);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getDbProxyConnectString() const;
	void setDbProxyConnectString(const std::string &dbProxyConnectString);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDbInstanceId() const;
	void setDbInstanceId(const std::string &dbInstanceId);
	std::string getDBProxyEngineType() const;
	void setDBProxyEngineType(const std::string &dBProxyEngineType);
	std::string getDbProxyEndpointId() const;
	void setDbProxyEndpointId(const std::string &dbProxyEndpointId);

private:
	std::string dbProxySslEnabled_;
	std::string accessKeyId_;
	std::string dbProxyConnectString_;
	std::string regionId_;
	std::string dbInstanceId_;
	std::string dBProxyEngineType_;
	std::string dbProxyEndpointId_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_MODIFYDBPROXYINSTANCESSLREQUEST_H_
