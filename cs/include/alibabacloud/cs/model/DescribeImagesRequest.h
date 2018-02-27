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

#ifndef ALIBABACLOUD_CS_MODEL_DESCRIBEIMAGESREQUEST_H_
#define ALIBABACLOUD_CS_MODEL_DESCRIBEIMAGESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/cs/CSExport.h>

namespace AlibabaCloud
{
	namespace CS
	{
		namespace Model
		{
			class ALIBABACLOUD_CS_EXPORT DescribeImagesRequest : public RoaServiceRequest
			{

			public:
				DescribeImagesRequest();
				~DescribeImagesRequest();

				std::string getRegionID()const;
				void setRegionID(const std::string& regionID);
				std::string getImageName()const;
				void setImageName(const std::string& imageName);
				std::string getDockerVersion()const;
				void setDockerVersion(const std::string& dockerVersion);

            private:
				std::string regionID_;
				std::string imageName_;
				std::string dockerVersion_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CS_MODEL_DESCRIBEIMAGESREQUEST_H_