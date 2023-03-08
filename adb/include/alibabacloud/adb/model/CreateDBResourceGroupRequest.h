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

#ifndef ALIBABACLOUD_ADB_MODEL_CREATEDBRESOURCEGROUPREQUEST_H_
#define ALIBABACLOUD_ADB_MODEL_CREATEDBRESOURCEGROUPREQUEST_H_

#include <alibabacloud/adb/AdbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Adb {
namespace Model {
class ALIBABACLOUD_ADB_EXPORT CreateDBResourceGroupRequest : public RpcServiceRequest {
public:
	CreateDBResourceGroupRequest();
	~CreateDBResourceGroupRequest();
	std::string getDBClusterId() const;
	void setDBClusterId(const std::string &dBClusterId);
	std::string getMinComputeResource() const;
	void setMinComputeResource(const std::string &minComputeResource);
	std::string getGroupName() const;
	void setGroupName(const std::string &groupName);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getGroupType() const;
	void setGroupType(const std::string &groupType);
	std::string getMaxComputeResource() const;
	void setMaxComputeResource(const std::string &maxComputeResource);

private:
	std::string dBClusterId_;
	std::string minComputeResource_;
	std::string groupName_;
	std::string accessKeyId_;
	std::string groupType_;
	std::string maxComputeResource_;
};
} // namespace Model
} // namespace Adb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ADB_MODEL_CREATEDBRESOURCEGROUPREQUEST_H_
