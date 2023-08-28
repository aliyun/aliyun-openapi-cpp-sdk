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

#ifndef ALIBABACLOUD_PAIFEATURESTORE_MODEL_LISTFEATUREVIEWRELATIONSHIPSREQUEST_H_
#define ALIBABACLOUD_PAIFEATURESTORE_MODEL_LISTFEATUREVIEWRELATIONSHIPSREQUEST_H_

#include <alibabacloud/paifeaturestore/PaiFeatureStoreExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace PaiFeatureStore {
namespace Model {
class ALIBABACLOUD_PAIFEATURESTORE_EXPORT ListFeatureViewRelationshipsRequest : public RoaServiceRequest {
public:
	ListFeatureViewRelationshipsRequest();
	~ListFeatureViewRelationshipsRequest();
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getFeatureViewId() const;
	void setFeatureViewId(const std::string &featureViewId);

private:
	std::string instanceId_;
	std::string featureViewId_;
};
} // namespace Model
} // namespace PaiFeatureStore
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_PAIFEATURESTORE_MODEL_LISTFEATUREVIEWRELATIONSHIPSREQUEST_H_
