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

#ifndef ALIBABACLOUD_GPDB_MODEL_MODIFYDBINSTANCECONFIGREQUEST_H_
#define ALIBABACLOUD_GPDB_MODEL_MODIFYDBINSTANCECONFIGREQUEST_H_

#include <alibabacloud/gpdb/GpdbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Gpdb {
namespace Model {
class ALIBABACLOUD_GPDB_EXPORT ModifyDBInstanceConfigRequest : public RpcServiceRequest {
public:
	ModifyDBInstanceConfigRequest();
	~ModifyDBInstanceConfigRequest();
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	std::string getDBInstanceDescription() const;
	void setDBInstanceDescription(const std::string &dBInstanceDescription);
	int getServerlessResource() const;
	void setServerlessResource(int serverlessResource);
	int getIdleTime() const;
	void setIdleTime(int idleTime);

private:
	std::string accessKeyId_;
	std::string resourceGroupId_;
	std::string dBInstanceId_;
	std::string dBInstanceDescription_;
	int serverlessResource_;
	int idleTime_;
};
} // namespace Model
} // namespace Gpdb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GPDB_MODEL_MODIFYDBINSTANCECONFIGREQUEST_H_
