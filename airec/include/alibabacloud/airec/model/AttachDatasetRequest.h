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

#ifndef ALIBABACLOUD_AIREC_MODEL_ATTACHDATASETREQUEST_H_
#define ALIBABACLOUD_AIREC_MODEL_ATTACHDATASETREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/airec/AirecExport.h>

namespace AlibabaCloud
{
	namespace Airec
	{
		namespace Model
		{
			class ALIBABACLOUD_AIREC_EXPORT AttachDatasetRequest : public RoaServiceRequest
			{

			public:
				AttachDatasetRequest();
				~AttachDatasetRequest();

				std::string getVersionId()const;
				void setVersionId(const std::string& versionId);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);

            private:
				std::string versionId_;
				std::string instanceId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AIREC_MODEL_ATTACHDATASETREQUEST_H_