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

#ifndef ALIBABACLOUD_ICE_MODEL_SETDEFAULTSTORAGELOCATIONREQUEST_H_
#define ALIBABACLOUD_ICE_MODEL_SETDEFAULTSTORAGELOCATIONREQUEST_H_

#include <alibabacloud/ice/ICEExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ICE {
namespace Model {
class ALIBABACLOUD_ICE_EXPORT SetDefaultStorageLocationRequest : public RpcServiceRequest {
public:
	SetDefaultStorageLocationRequest();
	~SetDefaultStorageLocationRequest();
	std::string getStorageType() const;
	void setStorageType(const std::string &storageType);
	std::string getBucket() const;
	void setBucket(const std::string &bucket);
	std::string getPath() const;
	void setPath(const std::string &path);

private:
	std::string storageType_;
	std::string bucket_;
	std::string path_;
};
} // namespace Model
} // namespace ICE
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ICE_MODEL_SETDEFAULTSTORAGELOCATIONREQUEST_H_
