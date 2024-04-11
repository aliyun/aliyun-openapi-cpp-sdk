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

#ifndef ALIBABACLOUD_CAMS_MODEL_QUERYCHATAPPPHONENUMBERSREQUEST_H_
#define ALIBABACLOUD_CAMS_MODEL_QUERYCHATAPPPHONENUMBERSREQUEST_H_

#include <alibabacloud/cams/CamsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cams {
namespace Model {
class ALIBABACLOUD_CAMS_EXPORT QueryChatappPhoneNumbersRequest : public RpcServiceRequest {
public:
	QueryChatappPhoneNumbersRequest();
	~QueryChatappPhoneNumbersRequest();
	std::string getApiCode() const;
	void setApiCode(const std::string &apiCode);
	std::string getIsvCode() const;
	void setIsvCode(const std::string &isvCode);
	std::string getProdCode() const;
	void setProdCode(const std::string &prodCode);
	std::string getCustSpaceId() const;
	void setCustSpaceId(const std::string &custSpaceId);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string apiCode_;
	std::string isvCode_;
	std::string prodCode_;
	std::string custSpaceId_;
	std::string status_;
};
} // namespace Model
} // namespace Cams
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CAMS_MODEL_QUERYCHATAPPPHONENUMBERSREQUEST_H_
