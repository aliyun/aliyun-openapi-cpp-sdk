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

#ifndef ALIBABACLOUD_PTS_MODEL_GETJMETERSCENERUNNINGDATARESULT_H_
#define ALIBABACLOUD_PTS_MODEL_GETJMETERSCENERUNNINGDATARESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/pts/PTSExport.h>

namespace AlibabaCloud
{
	namespace PTS
	{
		namespace Model
		{
			class ALIBABACLOUD_PTS_EXPORT GetJMeterSceneRunningDataResult : public ServiceResult
			{
			public:
				struct RunningData
				{
					std::string status;
					std::vector<std::string> sampleStatList;
					int holdFor;
					bool hasReport;
					int agentCount;
					std::string stageName;
					long startTimeTS;
					long vum;
					std::string sceneId;
					std::string sceneName;
					std::string allSampleStat;
					int concurrency;
					std::vector<std::string> agentIdList;
					bool isDebugging;
				};


				GetJMeterSceneRunningDataResult();
				explicit GetJMeterSceneRunningDataResult(const std::string &payload);
				~GetJMeterSceneRunningDataResult();
				RunningData getRunningData()const;
				std::string getMessage()const;
				int getHttpStatusCode()const;
				std::string getDocumentUrl()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				RunningData runningData_;
				std::string message_;
				int httpStatusCode_;
				std::string documentUrl_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_PTS_MODEL_GETJMETERSCENERUNNINGDATARESULT_H_