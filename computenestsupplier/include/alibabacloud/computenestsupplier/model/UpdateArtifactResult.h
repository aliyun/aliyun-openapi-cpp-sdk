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

#ifndef ALIBABACLOUD_COMPUTENESTSUPPLIER_MODEL_UPDATEARTIFACTRESULT_H_
#define ALIBABACLOUD_COMPUTENESTSUPPLIER_MODEL_UPDATEARTIFACTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/computenestsupplier/ComputeNestSupplierExport.h>

namespace AlibabaCloud
{
	namespace ComputeNestSupplier
	{
		namespace Model
		{
			class ALIBABACLOUD_COMPUTENESTSUPPLIER_EXPORT UpdateArtifactResult : public ServiceResult
			{
			public:


				UpdateArtifactResult();
				explicit UpdateArtifactResult(const std::string &payload);
				~UpdateArtifactResult();
				std::string getStatus()const;
				std::string getArtifactVersion()const;
				std::string getDescription()const;
				std::string getArtifactId()const;
				std::string getArtifactType()const;
				std::string getSupportRegionIds()const;
				std::string getGmtModified()const;
				std::string getVersionName()const;
				std::string getArtifactProperty()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				std::string artifactVersion_;
				std::string description_;
				std::string artifactId_;
				std::string artifactType_;
				std::string supportRegionIds_;
				std::string gmtModified_;
				std::string versionName_;
				std::string artifactProperty_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_COMPUTENESTSUPPLIER_MODEL_UPDATEARTIFACTRESULT_H_