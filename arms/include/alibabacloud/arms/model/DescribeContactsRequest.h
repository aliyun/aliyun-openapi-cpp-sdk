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

#ifndef ALIBABACLOUD_ARMS_MODEL_DESCRIBECONTACTSREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_DESCRIBECONTACTSREQUEST_H_

#include <alibabacloud/arms/ARMSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ARMS {
namespace Model {
class ALIBABACLOUD_ARMS_EXPORT DescribeContactsRequest : public RpcServiceRequest {
public:
	DescribeContactsRequest();
	~DescribeContactsRequest();
	std::string getContactIds() const;
	void setContactIds(const std::string &contactIds);
	std::string getVerbose() const;
	void setVerbose(const std::string &verbose);
	std::string getContactName() const;
	void setContactName(const std::string &contactName);
	long getSize() const;
	void setSize(long size);
	std::string getPhone() const;
	void setPhone(const std::string &phone);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	long getPage() const;
	void setPage(long page);
	std::string getEmail() const;
	void setEmail(const std::string &email);

private:
	std::string contactIds_;
	std::string verbose_;
	std::string contactName_;
	long size_;
	std::string phone_;
	std::string regionId_;
	long page_;
	std::string email_;
};
} // namespace Model
} // namespace ARMS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ARMS_MODEL_DESCRIBECONTACTSREQUEST_H_
