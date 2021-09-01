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

#ifndef ALIBABACLOUD_MTS_MODEL_QUERYMEDIAFPDELETEJOBLISTRESULT_H_
#define ALIBABACLOUD_MTS_MODEL_QUERYMEDIAFPDELETEJOBLISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/mts/MtsExport.h>

namespace AlibabaCloud
{
	namespace Mts
	{
		namespace Model
		{
			class ALIBABACLOUD_MTS_EXPORT QueryMediaFpDeleteJobListResult : public ServiceResult
			{
			public:
				struct MediaFpDeleteJob
				{
					std::string finishTime;
					std::string message;
					std::string userData;
					std::string state;
					std::string creationTime;
					std::string primaryKey;
					std::string pipelineId;
					std::string id;
					std::string code;
					std::string fpDBId;
				};


				QueryMediaFpDeleteJobListResult();
				explicit QueryMediaFpDeleteJobListResult(const std::string &payload);
				~QueryMediaFpDeleteJobListResult();
				std::vector<std::string> getNonExistIds()const;
				std::vector<MediaFpDeleteJob> getMediaFpDeleteJobList()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<std::string> nonExistIds_;
				std::vector<MediaFpDeleteJob> mediaFpDeleteJobList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MTS_MODEL_QUERYMEDIAFPDELETEJOBLISTRESULT_H_