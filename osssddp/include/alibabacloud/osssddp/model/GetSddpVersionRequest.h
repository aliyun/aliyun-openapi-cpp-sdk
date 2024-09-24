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

#ifndef ALIBABACLOUD_OSSSDDP_MODEL_GETSDDPVERSIONREQUEST_H_
#define ALIBABACLOUD_OSSSDDP_MODEL_GETSDDPVERSIONREQUEST_H_

#include <alibabacloud/osssddp/OssSddpExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OssSddp {
namespace Model {
class ALIBABACLOUD_OSSSDDP_EXPORT GetSddpVersionRequest : public RpcServiceRequest {
public:
	GetSddpVersionRequest();
	~GetSddpVersionRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);

private:
	std::string clientToken_;
};
} // namespace Model
} // namespace OssSddp
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OSSSDDP_MODEL_GETSDDPVERSIONREQUEST_H_
