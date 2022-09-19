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

#ifndef ALIBABACLOUD_VIAPI_REGEN_MODEL_UPDATELABELSETREQUEST_H_
#define ALIBABACLOUD_VIAPI_REGEN_MODEL_UPDATELABELSETREQUEST_H_

#include <alibabacloud/viapi-regen/Viapi_regenExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Viapi_regen {
namespace Model {
class ALIBABACLOUD_VIAPI_REGEN_EXPORT UpdateLabelsetRequest : public RpcServiceRequest {
public:
	UpdateLabelsetRequest();
	~UpdateLabelsetRequest();
	std::string getDescription() const;
	void setDescription(const std::string &description);
	long getId() const;
	void setId(long id);
	std::string getTagUserList() const;
	void setTagUserList(const std::string &tagUserList);
	std::string getUserOssUrl() const;
	void setUserOssUrl(const std::string &userOssUrl);
	std::string getObjectKey() const;
	void setObjectKey(const std::string &objectKey);
	std::string getName() const;
	void setName(const std::string &name);

private:
	std::string description_;
	long id_;
	std::string tagUserList_;
	std::string userOssUrl_;
	std::string objectKey_;
	std::string name_;
};
} // namespace Model
} // namespace Viapi_regen
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VIAPI_REGEN_MODEL_UPDATELABELSETREQUEST_H_
