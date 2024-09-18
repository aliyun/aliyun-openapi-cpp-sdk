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

#ifndef ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_ADDSHAREREPORTREQUEST_H_
#define ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_ADDSHAREREPORTREQUEST_H_

#include <alibabacloud/quickbi-public/Quickbi_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Quickbi_public {
namespace Model {
class ALIBABACLOUD_QUICKBI_PUBLIC_EXPORT AddShareReportRequest : public RpcServiceRequest {
public:
	AddShareReportRequest();
	~AddShareReportRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getAccessPoint() const;
	void setAccessPoint(const std::string &accessPoint);
	long getExpireDate() const;
	void setExpireDate(long expireDate);
	int getAuthPoint() const;
	void setAuthPoint(int authPoint);
	std::string getSignType() const;
	void setSignType(const std::string &signType);
	int getShareToType() const;
	void setShareToType(int shareToType);
	std::string getWorksId() const;
	void setWorksId(const std::string &worksId);
	std::string getShareToId() const;
	void setShareToId(const std::string &shareToId);

private:
	std::string clientToken_;
	std::string accessPoint_;
	long expireDate_;
	int authPoint_;
	std::string signType_;
	int shareToType_;
	std::string worksId_;
	std::string shareToId_;
};
} // namespace Model
} // namespace Quickbi_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_ADDSHAREREPORTREQUEST_H_
