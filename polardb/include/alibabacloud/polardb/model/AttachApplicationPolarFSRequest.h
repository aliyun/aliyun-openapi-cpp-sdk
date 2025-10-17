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

#ifndef ALIBABACLOUD_POLARDB_MODEL_ATTACHAPPLICATIONPOLARFSREQUEST_H_
#define ALIBABACLOUD_POLARDB_MODEL_ATTACHAPPLICATIONPOLARFSREQUEST_H_

#include <alibabacloud/polardb/PolardbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Polardb {
namespace Model {
class ALIBABACLOUD_POLARDB_EXPORT AttachApplicationPolarFSRequest : public RpcServiceRequest {
public:
	AttachApplicationPolarFSRequest();
	~AttachApplicationPolarFSRequest();
	bool getReplaceExisted() const;
	void setReplaceExisted(bool replaceExisted);
	std::string getApplicationId() const;
	void setApplicationId(const std::string &applicationId);
	std::string getPolarFSAccessKeyId() const;
	void setPolarFSAccessKeyId(const std::string &polarFSAccessKeyId);
	std::string getPolarFSInstanceId() const;
	void setPolarFSInstanceId(const std::string &polarFSInstanceId);
	std::string getPolarFSAccessKeySecret() const;
	void setPolarFSAccessKeySecret(const std::string &polarFSAccessKeySecret);

private:
	bool replaceExisted_;
	std::string applicationId_;
	std::string polarFSAccessKeyId_;
	std::string polarFSInstanceId_;
	std::string polarFSAccessKeySecret_;
};
} // namespace Model
} // namespace Polardb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_POLARDB_MODEL_ATTACHAPPLICATIONPOLARFSREQUEST_H_
