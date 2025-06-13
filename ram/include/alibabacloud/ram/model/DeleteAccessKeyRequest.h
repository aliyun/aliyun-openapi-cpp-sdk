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

#ifndef ALIBABACLOUD_RAM_MODEL_DELETEACCESSKEYREQUEST_H_
#define ALIBABACLOUD_RAM_MODEL_DELETEACCESSKEYREQUEST_H_

#include <alibabacloud/ram/RamExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ram {
namespace Model {
class ALIBABACLOUD_RAM_EXPORT DeleteAccessKeyRequest : public RpcServiceRequest {
public:
	DeleteAccessKeyRequest();
	~DeleteAccessKeyRequest();
	std::string getUserAccessKeyId() const;
	void setUserAccessKeyId(const std::string &userAccessKeyId);
	std::string getUserName() const;
	void setUserName(const std::string &userName);

private:
	std::string userAccessKeyId_;
	std::string userName_;
};
} // namespace Model
} // namespace Ram
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RAM_MODEL_DELETEACCESSKEYREQUEST_H_
