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

#ifndef ALIBABACLOUD_RESOURCEMANAGER_MODEL_ENABLERESOURCEDIRECTORYREQUEST_H_
#define ALIBABACLOUD_RESOURCEMANAGER_MODEL_ENABLERESOURCEDIRECTORYREQUEST_H_

#include <alibabacloud/resourcemanager/ResourceManagerExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ResourceManager {
namespace Model {
class ALIBABACLOUD_RESOURCEMANAGER_EXPORT EnableResourceDirectoryRequest : public RpcServiceRequest {
public:
	EnableResourceDirectoryRequest();
	~EnableResourceDirectoryRequest();
	std::string getEnableMode() const;
	void setEnableMode(const std::string &enableMode);
	std::string getMASecureMobilePhone() const;
	void setMASecureMobilePhone(const std::string &mASecureMobilePhone);
	std::string getMAName() const;
	void setMAName(const std::string &mAName);
	std::string getVerificationCode() const;
	void setVerificationCode(const std::string &verificationCode);

private:
	std::string enableMode_;
	std::string mASecureMobilePhone_;
	std::string mAName_;
	std::string verificationCode_;
};
} // namespace Model
} // namespace ResourceManager
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RESOURCEMANAGER_MODEL_ENABLERESOURCEDIRECTORYREQUEST_H_
