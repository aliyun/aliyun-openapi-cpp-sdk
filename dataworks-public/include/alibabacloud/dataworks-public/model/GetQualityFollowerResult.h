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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETQUALITYFOLLOWERRESULT_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETQUALITYFOLLOWERRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>

namespace AlibabaCloud
{
	namespace Dataworks_public
	{
		namespace Model
		{
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT GetQualityFollowerResult : public ServiceResult
			{
			public:
				struct Follower
				{
					std::string entityId;
					std::string followerAccountName;
					std::string tableName;
					long modifyTime;
					std::string projectName;
					long createTime;
					std::string follower;
					long id;
					int alarmMode;
				};


				GetQualityFollowerResult();
				explicit GetQualityFollowerResult(const std::string &payload);
				~GetQualityFollowerResult();
				int getHttpStatusCode()const;
				std::vector<Follower> getData()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				int httpStatusCode_;
				std::vector<Follower> data_;
				std::string errorCode_;
				std::string errorMessage_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETQUALITYFOLLOWERRESULT_H_