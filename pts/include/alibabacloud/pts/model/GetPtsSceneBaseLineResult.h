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

#ifndef ALIBABACLOUD_PTS_MODEL_GETPTSSCENEBASELINERESULT_H_
#define ALIBABACLOUD_PTS_MODEL_GETPTSSCENEBASELINERESULT_H_

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
			class ALIBABACLOUD_PTS_EXPORT GetPtsSceneBaseLineResult : public ServiceResult
			{
			public:
				struct Baseline
				{
					struct SceneBaseline
					{
						float successRateBiz;
						float seg99Rt;
						long failCountBiz;
						float successRateReq;
						float seg90Rt;
						long failCountReq;
						float avgTps;
						float avgRt;
					};
					struct ChainBaselineData
					{
						float seg99Rt;
						float successRateBiz;
						long failCountBiz;
						float successRateReq;
						int minRt;
						float seg90Rt;
						long failCountReq;
						long id;
						float avgTps;
						int maxRt;
						float avgRt;
						std::string name;
					};
					SceneBaseline sceneBaseline;
					std::vector<ChainBaselineData> apiBaselines;
					std::string name;
				};


				GetPtsSceneBaseLineResult();
				explicit GetPtsSceneBaseLineResult(const std::string &payload);
				~GetPtsSceneBaseLineResult();
				std::string getSceneId()const;
				std::string getMessage()const;
				int getHttpStatusCode()const;
				Baseline getBaseline()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string sceneId_;
				std::string message_;
				int httpStatusCode_;
				Baseline baseline_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_PTS_MODEL_GETPTSSCENEBASELINERESULT_H_