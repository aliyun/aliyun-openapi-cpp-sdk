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

#ifndef ALIBABACLOUD_SELECTDB_MODEL_MODIFYBECLUSTERATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_SELECTDB_MODEL_MODIFYBECLUSTERATTRIBUTEREQUEST_H_

#include <alibabacloud/selectdb/SelectdbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Selectdb {
namespace Model {
class ALIBABACLOUD_SELECTDB_EXPORT ModifyBEClusterAttributeRequest : public RpcServiceRequest {
public:
	ModifyBEClusterAttributeRequest();
	~ModifyBEClusterAttributeRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getDBClusterId() const;
	void setDBClusterId(const std::string &dBClusterId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	std::string getValue() const;
	void setValue(const std::string &value);
	std::string getInstanceAttributeType() const;
	void setInstanceAttributeType(const std::string &instanceAttributeType);

private:
	long resourceOwnerId_;
	std::string dBClusterId_;
	std::string regionId_;
	std::string dBInstanceId_;
	std::string value_;
	std::string instanceAttributeType_;
};
} // namespace Model
} // namespace Selectdb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SELECTDB_MODEL_MODIFYBECLUSTERATTRIBUTEREQUEST_H_
