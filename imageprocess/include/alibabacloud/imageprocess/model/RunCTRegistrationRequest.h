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

#ifndef ALIBABACLOUD_IMAGEPROCESS_MODEL_RUNCTREGISTRATIONREQUEST_H_
#define ALIBABACLOUD_IMAGEPROCESS_MODEL_RUNCTREGISTRATIONREQUEST_H_

#include <alibabacloud/imageprocess/ImageprocessExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Imageprocess {
namespace Model {
class ALIBABACLOUD_IMAGEPROCESS_EXPORT RunCTRegistrationRequest : public RpcServiceRequest {
public:
	struct ReferenceList {
		std::string referenceURL;
	};
	struct FloatingList {
		std::string floatingURL;
	};
	RunCTRegistrationRequest();
	~RunCTRegistrationRequest();
	std::string getDataSourceType() const;
	void setDataSourceType(const std::string &dataSourceType);
	std::string getOrgName() const;
	void setOrgName(const std::string &orgName);
	std::vector<ReferenceList> getReferenceList() const;
	void setReferenceList(const std::vector<ReferenceList> &referenceList);
	std::string getDataFormat() const;
	void setDataFormat(const std::string &dataFormat);
	std::string getOrgId() const;
	void setOrgId(const std::string &orgId);
	bool getAsync() const;
	void setAsync(bool async);
	std::vector<FloatingList> getFloatingList() const;
	void setFloatingList(const std::vector<FloatingList> &floatingList);

private:
	std::string dataSourceType_;
	std::string orgName_;
	std::vector<ReferenceList> referenceList_;
	std::string dataFormat_;
	std::string orgId_;
	bool async_;
	std::vector<FloatingList> floatingList_;
};
} // namespace Model
} // namespace Imageprocess
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMAGEPROCESS_MODEL_RUNCTREGISTRATIONREQUEST_H_
