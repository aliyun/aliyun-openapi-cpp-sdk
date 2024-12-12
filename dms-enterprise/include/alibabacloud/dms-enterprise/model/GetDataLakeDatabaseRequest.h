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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_GETDATALAKEDATABASEREQUEST_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_GETDATALAKEDATABASEREQUEST_H_

#include <alibabacloud/dms-enterprise/Dms_enterpriseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dms_enterprise {
namespace Model {
class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT GetDataLakeDatabaseRequest : public RpcServiceRequest {
public:
	GetDataLakeDatabaseRequest();
	~GetDataLakeDatabaseRequest();
	long getTid() const;
	void setTid(long tid);
	std::string getCatalogName() const;
	void setCatalogName(const std::string &catalogName);
	std::string getDataRegion() const;
	void setDataRegion(const std::string &dataRegion);
	std::string getName() const;
	void setName(const std::string &name);

private:
	long tid_;
	std::string catalogName_;
	std::string dataRegion_;
	std::string name_;
};
} // namespace Model
} // namespace Dms_enterprise
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_GETDATALAKEDATABASEREQUEST_H_
