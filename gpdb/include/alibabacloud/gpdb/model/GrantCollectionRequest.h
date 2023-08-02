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

#ifndef ALIBABACLOUD_GPDB_MODEL_GRANTCOLLECTIONREQUEST_H_
#define ALIBABACLOUD_GPDB_MODEL_GRANTCOLLECTIONREQUEST_H_

#include <alibabacloud/gpdb/GpdbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Gpdb {
namespace Model {
class ALIBABACLOUD_GPDB_EXPORT GrantCollectionRequest : public RpcServiceRequest {
public:
	GrantCollectionRequest();
	~GrantCollectionRequest();
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getGrantType() const;
	void setGrantType(const std::string &grantType);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getManagerAccount() const;
	void setManagerAccount(const std::string &managerAccount);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	std::string getManagerAccountPassword() const;
	void setManagerAccountPassword(const std::string &managerAccountPassword);
	std::string getCollection() const;
	void setCollection(const std::string &collection);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getGrantToNamespace() const;
	void setGrantToNamespace(const std::string &grantToNamespace);
	std::string get_Namespace() const;
	void set_Namespace(const std::string &_namespace);

private:
	std::string accessKeyId_;
	std::string grantType_;
	std::string regionId_;
	std::string managerAccount_;
	std::string dBInstanceId_;
	std::string managerAccountPassword_;
	std::string collection_;
	long ownerId_;
	std::string grantToNamespace_;
	std::string _namespace_;
};
} // namespace Model
} // namespace Gpdb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GPDB_MODEL_GRANTCOLLECTIONREQUEST_H_
