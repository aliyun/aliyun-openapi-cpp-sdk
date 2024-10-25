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

#ifndef ALIBABACLOUD_ENS_MODEL_CREATEVSWITCHREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_CREATEVSWITCHREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT CreateVSwitchRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	CreateVSwitchRequest();
	~CreateVSwitchRequest();
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getEnsRegionId() const;
	void setEnsRegionId(const std::string &ensRegionId);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getVSwitchName() const;
	void setVSwitchName(const std::string &vSwitchName);
	std::string getCidrBlock() const;
	void setCidrBlock(const std::string &cidrBlock);
	std::string getNetworkId() const;
	void setNetworkId(const std::string &networkId);

private:
	std::string description_;
	std::string ensRegionId_;
	std::vector<Tag> tag_;
	std::string vSwitchName_;
	std::string cidrBlock_;
	std::string networkId_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_CREATEVSWITCHREQUEST_H_
