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

#ifndef ALIBABACLOUD_CAMS_MODEL_GETCHATAPPPHONENUMBERMETRICREQUEST_H_
#define ALIBABACLOUD_CAMS_MODEL_GETCHATAPPPHONENUMBERMETRICREQUEST_H_

#include <alibabacloud/cams/CamsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cams {
namespace Model {
class ALIBABACLOUD_CAMS_EXPORT GetChatappPhoneNumberMetricRequest : public RpcServiceRequest {
public:
	GetChatappPhoneNumberMetricRequest();
	~GetChatappPhoneNumberMetricRequest();
	std::string getPhoneNumber() const;
	void setPhoneNumber(const std::string &phoneNumber);
	std::string getApiCode() const;
	void setApiCode(const std::string &apiCode);
	long getEnd() const;
	void setEnd(long end);
	std::string getIsvCode() const;
	void setIsvCode(const std::string &isvCode);
	std::string getProdCode() const;
	void setProdCode(const std::string &prodCode);
	long getStart() const;
	void setStart(long start);
	std::string getCustSpaceId() const;
	void setCustSpaceId(const std::string &custSpaceId);
	std::string getGranularity() const;
	void setGranularity(const std::string &granularity);

private:
	std::string phoneNumber_;
	std::string apiCode_;
	long end_;
	std::string isvCode_;
	std::string prodCode_;
	long start_;
	std::string custSpaceId_;
	std::string granularity_;
};
} // namespace Model
} // namespace Cams
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CAMS_MODEL_GETCHATAPPPHONENUMBERMETRICREQUEST_H_
