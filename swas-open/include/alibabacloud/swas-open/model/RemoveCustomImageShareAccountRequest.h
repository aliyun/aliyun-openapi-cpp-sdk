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

#ifndef ALIBABACLOUD_SWAS_OPEN_MODEL_REMOVECUSTOMIMAGESHAREACCOUNTREQUEST_H_
#define ALIBABACLOUD_SWAS_OPEN_MODEL_REMOVECUSTOMIMAGESHAREACCOUNTREQUEST_H_

#include <alibabacloud/swas-open/SWAS_OPENExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace SWAS_OPEN {
namespace Model {
class ALIBABACLOUD_SWAS_OPEN_EXPORT RemoveCustomImageShareAccountRequest : public RpcServiceRequest {
public:
	RemoveCustomImageShareAccountRequest();
	~RemoveCustomImageShareAccountRequest();
	std::string getImageId() const;
	void setImageId(const std::string &imageId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::vector<long> getAccount() const;
	void setAccount(const std::vector<long> &account);

private:
	std::string imageId_;
	std::string clientToken_;
	std::string regionId_;
	std::vector<long> account_;
};
} // namespace Model
} // namespace SWAS_OPEN
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SWAS_OPEN_MODEL_REMOVECUSTOMIMAGESHAREACCOUNTREQUEST_H_
