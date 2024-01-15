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

#ifndef ALIBABACLOUD_LINKVISUAL_MODEL_QUERYRECORDDOWNLOADJOBBYIDRESULT_H_
#define ALIBABACLOUD_LINKVISUAL_MODEL_QUERYRECORDDOWNLOADJOBBYIDRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/linkvisual/LinkvisualExport.h>

namespace AlibabaCloud
{
	namespace Linkvisual
	{
		namespace Model
		{
			class ALIBABACLOUD_LINKVISUAL_EXPORT QueryRecordDownloadJobByIdResult : public ServiceResult
			{
			public:
				struct Data
				{
					int status;
					int streamType;
					std::string iotId;
					int type;
					int progress;
					int endTime;
					int recordType;
					int jobErrorCode;
					std::string fileName;
					int beginTime;
					std::string url;
				};


				QueryRecordDownloadJobByIdResult();
				explicit QueryRecordDownloadJobByIdResult(const std::string &payload);
				~QueryRecordDownloadJobByIdResult();
				Data getData()const;
				std::string getErrorMessage()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				Data data_;
				std::string errorMessage_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LINKVISUAL_MODEL_QUERYRECORDDOWNLOADJOBBYIDRESULT_H_