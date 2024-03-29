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

#ifndef ALIBABACLOUD_ACTIONTRAIL_MODEL_UPDATETRAILRESULT_H_
#define ALIBABACLOUD_ACTIONTRAIL_MODEL_UPDATETRAILRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/actiontrail/ActiontrailExport.h>

namespace AlibabaCloud
{
	namespace Actiontrail
	{
		namespace Model
		{
			class ALIBABACLOUD_ACTIONTRAIL_EXPORT UpdateTrailResult : public ServiceResult
			{
			public:


				UpdateTrailResult();
				explicit UpdateTrailResult(const std::string &payload);
				~UpdateTrailResult();
				std::string getSlsProjectArn()const;
				std::string getEventRW()const;
				std::string getHomeRegion()const;
				std::string getOssKeyPrefix()const;
				std::string getOssBucketName()const;
				std::string getOssWriteRoleArn()const;
				std::string getSlsWriteRoleArn()const;
				std::string getTrailRegion()const;
				std::string getName()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string slsProjectArn_;
				std::string eventRW_;
				std::string homeRegion_;
				std::string ossKeyPrefix_;
				std::string ossBucketName_;
				std::string ossWriteRoleArn_;
				std::string slsWriteRoleArn_;
				std::string trailRegion_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ACTIONTRAIL_MODEL_UPDATETRAILRESULT_H_