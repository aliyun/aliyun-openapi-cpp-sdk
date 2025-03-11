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

#ifndef ALIBABACLOUD_DRDS_MODEL_MODIFYDRDSIPWHITELISTREQUEST_H_
#define ALIBABACLOUD_DRDS_MODEL_MODIFYDRDSIPWHITELISTREQUEST_H_

#include <alibabacloud/drds/DrdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Drds {
namespace Model {
class ALIBABACLOUD_DRDS_EXPORT ModifyDrdsIpWhiteListRequest : public RpcServiceRequest {
public:
	ModifyDrdsIpWhiteListRequest();
	~ModifyDrdsIpWhiteListRequest();
	std::string getDrdsInstanceId() const;
	void setDrdsInstanceId(const std::string &drdsInstanceId);
	std::string getGroupName() const;
	void setGroupName(const std::string &groupName);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	bool getMode() const;
	void setMode(bool mode);
	std::string getDbName() const;
	void setDbName(const std::string &dbName);
	std::string getGroupAttribute() const;
	void setGroupAttribute(const std::string &groupAttribute);
	std::string getIpWhiteList() const;
	void setIpWhiteList(const std::string &ipWhiteList);

private:
	std::string drdsInstanceId_;
	std::string groupName_;
	std::string accessKeyId_;
	bool mode_;
	std::string dbName_;
	std::string groupAttribute_;
	std::string ipWhiteList_;
};
} // namespace Model
} // namespace Drds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DRDS_MODEL_MODIFYDRDSIPWHITELISTREQUEST_H_
