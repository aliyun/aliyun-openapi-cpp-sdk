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

#ifndef ALIBABACLOUD_CBN_MODEL_DISABLECENVBRHEALTHCHECKREQUEST_H_
#define ALIBABACLOUD_CBN_MODEL_DISABLECENVBRHEALTHCHECKREQUEST_H_

#include <alibabacloud/cbn/CbnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cbn {
namespace Model {
class ALIBABACLOUD_CBN_EXPORT DisableCenVbrHealthCheckRequest : public RpcServiceRequest {
public:
	DisableCenVbrHealthCheckRequest();
	~DisableCenVbrHealthCheckRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getCenId() const;
	void setCenId(const std::string &cenId);
	long getVbrInstanceOwnerId() const;
	void setVbrInstanceOwnerId(long vbrInstanceOwnerId);
	std::string getVbrInstanceRegionId() const;
	void setVbrInstanceRegionId(const std::string &vbrInstanceRegionId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getVersion() const;
	void setVersion(const std::string &version);
	std::string getVbrInstanceId() const;
	void setVbrInstanceId(const std::string &vbrInstanceId);

private:
	long resourceOwnerId_;
	std::string cenId_;
	long vbrInstanceOwnerId_;
	std::string vbrInstanceRegionId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string version_;
	std::string vbrInstanceId_;
};
} // namespace Model
} // namespace Cbn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CBN_MODEL_DISABLECENVBRHEALTHCHECKREQUEST_H_
