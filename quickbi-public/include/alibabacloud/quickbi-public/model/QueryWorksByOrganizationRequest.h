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

#ifndef ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_QUERYWORKSBYORGANIZATIONREQUEST_H_
#define ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_QUERYWORKSBYORGANIZATIONREQUEST_H_

#include <alibabacloud/quickbi-public/Quickbi_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Quickbi_public {
namespace Model {
class ALIBABACLOUD_QUICKBI_PUBLIC_EXPORT QueryWorksByOrganizationRequest : public RpcServiceRequest {
public:
	QueryWorksByOrganizationRequest();
	~QueryWorksByOrganizationRequest();
	int getThirdPartAuthFlag() const;
	void setThirdPartAuthFlag(int thirdPartAuthFlag);
	std::string getAccessPoint() const;
	void setAccessPoint(const std::string &accessPoint);
	int getPageNum() const;
	void setPageNum(int pageNum);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getWorksType() const;
	void setWorksType(const std::string &worksType);
	std::string getSignType() const;
	void setSignType(const std::string &signType);
	int getStatus() const;
	void setStatus(int status);

private:
	int thirdPartAuthFlag_;
	std::string accessPoint_;
	int pageNum_;
	int pageSize_;
	std::string worksType_;
	std::string signType_;
	int status_;
};
} // namespace Model
} // namespace Quickbi_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_QUERYWORKSBYORGANIZATIONREQUEST_H_
