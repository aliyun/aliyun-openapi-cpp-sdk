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

#ifndef ALIBABACLOUD_DRDS_MODEL_SETBACKUPLOCALREQUEST_H_
#define ALIBABACLOUD_DRDS_MODEL_SETBACKUPLOCALREQUEST_H_

#include <alibabacloud/drds/DrdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Drds {
namespace Model {
class ALIBABACLOUD_DRDS_EXPORT SetBackupLocalRequest : public RpcServiceRequest {
public:
	SetBackupLocalRequest();
	~SetBackupLocalRequest();
	std::string getLocalLogRetentionHours() const;
	void setLocalLogRetentionHours(const std::string &localLogRetentionHours);
	std::string getLocalLogRetentionSpace() const;
	void setLocalLogRetentionSpace(const std::string &localLogRetentionSpace);
	std::string getDrdsInstanceId() const;
	void setDrdsInstanceId(const std::string &drdsInstanceId);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getHighSpaceUsageProtection() const;
	void setHighSpaceUsageProtection(const std::string &highSpaceUsageProtection);

private:
	std::string localLogRetentionHours_;
	std::string localLogRetentionSpace_;
	std::string drdsInstanceId_;
	std::string accessKeyId_;
	std::string highSpaceUsageProtection_;
};
} // namespace Model
} // namespace Drds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DRDS_MODEL_SETBACKUPLOCALREQUEST_H_
