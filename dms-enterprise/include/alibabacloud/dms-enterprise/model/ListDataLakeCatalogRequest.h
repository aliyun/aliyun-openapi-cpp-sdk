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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_LISTDATALAKECATALOGREQUEST_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_LISTDATALAKECATALOGREQUEST_H_

#include <alibabacloud/dms-enterprise/Dms_enterpriseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dms_enterprise {
namespace Model {
class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT ListDataLakeCatalogRequest : public RpcServiceRequest {
public:
	ListDataLakeCatalogRequest();
	~ListDataLakeCatalogRequest();
	std::string getSearchKey() const;
	void setSearchKey(const std::string &searchKey);
	long getTid() const;
	void setTid(long tid);
	std::string getDataRegion() const;
	void setDataRegion(const std::string &dataRegion);

private:
	std::string searchKey_;
	long tid_;
	std::string dataRegion_;
};
} // namespace Model
} // namespace Dms_enterprise
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_LISTDATALAKECATALOGREQUEST_H_
