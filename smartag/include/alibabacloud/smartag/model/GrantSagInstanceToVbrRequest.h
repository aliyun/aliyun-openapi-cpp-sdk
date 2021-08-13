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

#ifndef ALIBABACLOUD_SMARTAG_MODEL_GRANTSAGINSTANCETOVBRREQUEST_H_
#define ALIBABACLOUD_SMARTAG_MODEL_GRANTSAGINSTANCETOVBRREQUEST_H_

#include <alibabacloud/smartag/SmartagExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Smartag {
namespace Model {
class ALIBABACLOUD_SMARTAG_EXPORT GrantSagInstanceToVbrRequest : public RpcServiceRequest {
public:
	GrantSagInstanceToVbrRequest();
	~GrantSagInstanceToVbrRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getVbrRegionId() const;
	void setVbrRegionId(const std::string &vbrRegionId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getVbrInstanceId() const;
	void setVbrInstanceId(const std::string &vbrInstanceId);
	std::string getSmartAGId() const;
	void setSmartAGId(const std::string &smartAGId);
	long getVbrUid() const;
	void setVbrUid(long vbrUid);

private:
	long resourceOwnerId_;
	std::string vbrRegionId_;
	std::string regionId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string vbrInstanceId_;
	std::string smartAGId_;
	long vbrUid_;
};
} // namespace Model
} // namespace Smartag
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SMARTAG_MODEL_GRANTSAGINSTANCETOVBRREQUEST_H_
