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

#ifndef ALIBABACLOUD_IMM_IMMCLIENT_H_
#define ALIBABACLOUD_IMM_IMMCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "ImmExport.h"
#include "model/ListPornBatchDetectJobsRequest.h"
#include "model/ListPornBatchDetectJobsResult.h"
#include "model/DetectImageFacesRequest.h"
#include "model/DetectImageFacesResult.h"
#include "model/DetectImageTagsRequest.h"
#include "model/DetectImageTagsResult.h"
#include "model/DeleteImageRequest.h"
#include "model/DeleteImageResult.h"
#include "model/CreateTagJobRequest.h"
#include "model/CreateTagJobResult.h"
#include "model/IndexTagRequest.h"
#include "model/IndexTagResult.h"
#include "model/ListProjectsRequest.h"
#include "model/ListProjectsResult.h"
#include "model/DeleteSetRequest.h"
#include "model/DeleteSetResult.h"
#include "model/GetFaceSearchImageRequest.h"
#include "model/GetFaceSearchImageResult.h"
#include "model/CreateVideoAnalyseTaskRequest.h"
#include "model/CreateVideoAnalyseTaskResult.h"
#include "model/CompareFaceRequest.h"
#include "model/CompareFaceResult.h"
#include "model/DetectTagRequest.h"
#include "model/DetectTagResult.h"
#include "model/ListFaceSearchGroupUsersRequest.h"
#include "model/ListFaceSearchGroupUsersResult.h"
#include "model/ListFaceSearchGroupImagesRequest.h"
#include "model/ListFaceSearchGroupImagesResult.h"
#include "model/CreateCADConversionTaskRequest.h"
#include "model/CreateCADConversionTaskResult.h"
#include "model/GetTagJobRequest.h"
#include "model/GetTagJobResult.h"
#include "model/DeleteFaceJobRequest.h"
#include "model/DeleteFaceJobResult.h"
#include "model/CreateDocIndexTaskRequest.h"
#include "model/CreateDocIndexTaskResult.h"
#include "model/PutProjectRequest.h"
#include "model/PutProjectResult.h"
#include "model/GetSetRequest.h"
#include "model/GetSetResult.h"
#include "model/GetVideoTaskRequest.h"
#include "model/GetVideoTaskResult.h"
#include "model/ListSetsRequest.h"
#include "model/ListSetsResult.h"
#include "model/SearchDocIndexRequest.h"
#include "model/SearchDocIndexResult.h"
#include "model/ListPhotoProcessTasksRequest.h"
#include "model/ListPhotoProcessTasksResult.h"
#include "model/ListVideosRequest.h"
#include "model/ListVideosResult.h"
#include "model/CreatePornBatchDetectJobRequest.h"
#include "model/CreatePornBatchDetectJobResult.h"
#include "model/FindImagesRequest.h"
#include "model/FindImagesResult.h"
#include "model/DeleteTagByNameRequest.h"
#include "model/DeleteTagByNameResult.h"
#include "model/DetectImageLogosRequest.h"
#include "model/DetectImageLogosResult.h"
#include "model/GetProjectRequest.h"
#include "model/GetProjectResult.h"
#include "model/DeletePhotoProcessTaskRequest.h"
#include "model/DeletePhotoProcessTaskResult.h"
#include "model/ListSetTagsRequest.h"
#include "model/ListSetTagsResult.h"
#include "model/DeleteVideoTaskRequest.h"
#include "model/DeleteVideoTaskResult.h"
#include "model/FindImagesByTagNamesRequest.h"
#include "model/FindImagesByTagNamesResult.h"
#include "model/DeleteTagSetRequest.h"
#include "model/DeleteTagSetResult.h"
#include "model/DeleteProjectRequest.h"
#include "model/DeleteProjectResult.h"
#include "model/UpdateDocIndexMetaRequest.h"
#include "model/UpdateDocIndexMetaResult.h"
#include "model/SearchFaceRequest.h"
#include "model/SearchFaceResult.h"
#include "model/GetImageRequest.h"
#include "model/GetImageResult.h"
#include "model/DetectImageCelebrityRequest.h"
#include "model/DetectImageCelebrityResult.h"
#include "model/CreateSetRequest.h"
#include "model/CreateSetResult.h"
#include "model/DeletePornBatchDetectJobRequest.h"
#include "model/DeletePornBatchDetectJobResult.h"
#include "model/ListFaceSearchGroupsRequest.h"
#include "model/ListFaceSearchGroupsResult.h"
#include "model/GetTagSetRequest.h"
#include "model/GetTagSetResult.h"
#include "model/ConvertOfficeFormatRequest.h"
#include "model/ConvertOfficeFormatResult.h"
#include "model/UpdateFaceGroupRequest.h"
#include "model/UpdateFaceGroupResult.h"
#include "model/ListTagPhotosRequest.h"
#include "model/ListTagPhotosResult.h"
#include "model/DetectImageBodiesRequest.h"
#include "model/DetectImageBodiesResult.h"
#include "model/DeleteFaceSearchImageByIdRequest.h"
#include "model/DeleteFaceSearchImageByIdResult.h"
#include "model/IndexVideoRequest.h"
#include "model/IndexVideoResult.h"
#include "model/DeleteDocIndexRequest.h"
#include "model/DeleteDocIndexResult.h"
#include "model/GetDocIndexTaskRequest.h"
#include "model/GetDocIndexTaskResult.h"
#include "model/GetImageJobRequest.h"
#include "model/GetImageJobResult.h"
#include "model/ListVideoAudiosRequest.h"
#include "model/ListVideoAudiosResult.h"
#include "model/CreateMergeFaceGroupsJobRequest.h"
#include "model/CreateMergeFaceGroupsJobResult.h"
#include "model/DeleteTagByUrlRequest.h"
#include "model/DeleteTagByUrlResult.h"
#include "model/ListTagSetsRequest.h"
#include "model/ListTagSetsResult.h"
#include "model/ListTagNamesRequest.h"
#include "model/ListTagNamesResult.h"
#include "model/CreateOfficeConversionTaskRequest.h"
#include "model/CreateOfficeConversionTaskResult.h"
#include "model/DetectQRCodesRequest.h"
#include "model/DetectQRCodesResult.h"
#include "model/GetFaceSearchGroupRequest.h"
#include "model/GetFaceSearchGroupResult.h"
#include "model/GetVideoRequest.h"
#include "model/GetVideoResult.h"
#include "model/ListImagesRequest.h"
#include "model/ListImagesResult.h"
#include "model/CompareImageFacesRequest.h"
#include "model/CompareImageFacesResult.h"
#include "model/DeleteTagJobRequest.h"
#include "model/DeleteTagJobResult.h"
#include "model/DeleteOfficeConversionTaskRequest.h"
#include "model/DeleteOfficeConversionTaskResult.h"
#include "model/PhotoProcessRequest.h"
#include "model/PhotoProcessResult.h"
#include "model/GetPhotoProcessTaskRequest.h"
#include "model/GetPhotoProcessTaskResult.h"
#include "model/ListVideoFramesRequest.h"
#include "model/ListVideoFramesResult.h"
#include "model/GetPornBatchDetectJobRequest.h"
#include "model/GetPornBatchDetectJobResult.h"
#include "model/DetectLogoRequest.h"
#include "model/DetectLogoResult.h"
#include "model/DetectClothesRequest.h"
#include "model/DetectClothesResult.h"
#include "model/ListTagJobsRequest.h"
#include "model/ListTagJobsResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DeleteFaceSearchUserRequest.h"
#include "model/DeleteFaceSearchUserResult.h"
#include "model/GetOfficeConversionTaskRequest.h"
#include "model/GetOfficeConversionTaskResult.h"
#include "model/CreateTagSetRequest.h"
#include "model/CreateTagSetResult.h"
#include "model/RegistFaceRequest.h"
#include "model/RegistFaceResult.h"
#include "model/FindSimilarFacesRequest.h"
#include "model/FindSimilarFacesResult.h"
#include "model/GetFaceSearchUserRequest.h"
#include "model/GetFaceSearchUserResult.h"
#include "model/DeleteImageJobRequest.h"
#include "model/DeleteImageJobResult.h"
#include "model/CreateFaceSetRequest.h"
#include "model/CreateFaceSetResult.h"
#include "model/DeleteFaceSearchGroupRequest.h"
#include "model/DeleteFaceSearchGroupResult.h"
#include "model/GetDocIndexRequest.h"
#include "model/GetDocIndexResult.h"
#include "model/IndexImageRequest.h"
#include "model/IndexImageResult.h"
#include "model/DetectImageTextsRequest.h"
#include "model/DetectImageTextsResult.h"
#include "model/ListImageJobsRequest.h"
#include "model/ListImageJobsResult.h"
#include "model/CreateGroupFacesJobRequest.h"
#include "model/CreateGroupFacesJobResult.h"
#include "model/UpdateImageRequest.h"
#include "model/UpdateImageResult.h"
#include "model/ListVideoTasksRequest.h"
#include "model/ListVideoTasksResult.h"
#include "model/CreateVideoCompressTaskRequest.h"
#include "model/CreateVideoCompressTaskResult.h"
#include "model/UpdateProjectRequest.h"
#include "model/UpdateProjectResult.h"
#include "model/DeleteVideoRequest.h"
#include "model/DeleteVideoResult.h"
#include "model/ListOfficeConversionTaskRequest.h"
#include "model/ListOfficeConversionTaskResult.h"
#include "model/UpdateSetRequest.h"
#include "model/UpdateSetResult.h"
#include "model/ListFaceGroupsRequest.h"
#include "model/ListFaceGroupsResult.h"


namespace AlibabaCloud
{
	namespace Imm
	{
		class ALIBABACLOUD_IMM_EXPORT ImmClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ListPornBatchDetectJobsResult> ListPornBatchDetectJobsOutcome;
			typedef std::future<ListPornBatchDetectJobsOutcome> ListPornBatchDetectJobsOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ListPornBatchDetectJobsRequest&, const ListPornBatchDetectJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPornBatchDetectJobsAsyncHandler;
			typedef Outcome<Error, Model::DetectImageFacesResult> DetectImageFacesOutcome;
			typedef std::future<DetectImageFacesOutcome> DetectImageFacesOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DetectImageFacesRequest&, const DetectImageFacesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectImageFacesAsyncHandler;
			typedef Outcome<Error, Model::DetectImageTagsResult> DetectImageTagsOutcome;
			typedef std::future<DetectImageTagsOutcome> DetectImageTagsOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DetectImageTagsRequest&, const DetectImageTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectImageTagsAsyncHandler;
			typedef Outcome<Error, Model::DeleteImageResult> DeleteImageOutcome;
			typedef std::future<DeleteImageOutcome> DeleteImageOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DeleteImageRequest&, const DeleteImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageAsyncHandler;
			typedef Outcome<Error, Model::CreateTagJobResult> CreateTagJobOutcome;
			typedef std::future<CreateTagJobOutcome> CreateTagJobOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::CreateTagJobRequest&, const CreateTagJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTagJobAsyncHandler;
			typedef Outcome<Error, Model::IndexTagResult> IndexTagOutcome;
			typedef std::future<IndexTagOutcome> IndexTagOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::IndexTagRequest&, const IndexTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> IndexTagAsyncHandler;
			typedef Outcome<Error, Model::ListProjectsResult> ListProjectsOutcome;
			typedef std::future<ListProjectsOutcome> ListProjectsOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ListProjectsRequest&, const ListProjectsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProjectsAsyncHandler;
			typedef Outcome<Error, Model::DeleteSetResult> DeleteSetOutcome;
			typedef std::future<DeleteSetOutcome> DeleteSetOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DeleteSetRequest&, const DeleteSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSetAsyncHandler;
			typedef Outcome<Error, Model::GetFaceSearchImageResult> GetFaceSearchImageOutcome;
			typedef std::future<GetFaceSearchImageOutcome> GetFaceSearchImageOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetFaceSearchImageRequest&, const GetFaceSearchImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetFaceSearchImageAsyncHandler;
			typedef Outcome<Error, Model::CreateVideoAnalyseTaskResult> CreateVideoAnalyseTaskOutcome;
			typedef std::future<CreateVideoAnalyseTaskOutcome> CreateVideoAnalyseTaskOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::CreateVideoAnalyseTaskRequest&, const CreateVideoAnalyseTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVideoAnalyseTaskAsyncHandler;
			typedef Outcome<Error, Model::CompareFaceResult> CompareFaceOutcome;
			typedef std::future<CompareFaceOutcome> CompareFaceOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::CompareFaceRequest&, const CompareFaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CompareFaceAsyncHandler;
			typedef Outcome<Error, Model::DetectTagResult> DetectTagOutcome;
			typedef std::future<DetectTagOutcome> DetectTagOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DetectTagRequest&, const DetectTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectTagAsyncHandler;
			typedef Outcome<Error, Model::ListFaceSearchGroupUsersResult> ListFaceSearchGroupUsersOutcome;
			typedef std::future<ListFaceSearchGroupUsersOutcome> ListFaceSearchGroupUsersOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ListFaceSearchGroupUsersRequest&, const ListFaceSearchGroupUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFaceSearchGroupUsersAsyncHandler;
			typedef Outcome<Error, Model::ListFaceSearchGroupImagesResult> ListFaceSearchGroupImagesOutcome;
			typedef std::future<ListFaceSearchGroupImagesOutcome> ListFaceSearchGroupImagesOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ListFaceSearchGroupImagesRequest&, const ListFaceSearchGroupImagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFaceSearchGroupImagesAsyncHandler;
			typedef Outcome<Error, Model::CreateCADConversionTaskResult> CreateCADConversionTaskOutcome;
			typedef std::future<CreateCADConversionTaskOutcome> CreateCADConversionTaskOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::CreateCADConversionTaskRequest&, const CreateCADConversionTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCADConversionTaskAsyncHandler;
			typedef Outcome<Error, Model::GetTagJobResult> GetTagJobOutcome;
			typedef std::future<GetTagJobOutcome> GetTagJobOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetTagJobRequest&, const GetTagJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTagJobAsyncHandler;
			typedef Outcome<Error, Model::DeleteFaceJobResult> DeleteFaceJobOutcome;
			typedef std::future<DeleteFaceJobOutcome> DeleteFaceJobOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DeleteFaceJobRequest&, const DeleteFaceJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFaceJobAsyncHandler;
			typedef Outcome<Error, Model::CreateDocIndexTaskResult> CreateDocIndexTaskOutcome;
			typedef std::future<CreateDocIndexTaskOutcome> CreateDocIndexTaskOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::CreateDocIndexTaskRequest&, const CreateDocIndexTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDocIndexTaskAsyncHandler;
			typedef Outcome<Error, Model::PutProjectResult> PutProjectOutcome;
			typedef std::future<PutProjectOutcome> PutProjectOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::PutProjectRequest&, const PutProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutProjectAsyncHandler;
			typedef Outcome<Error, Model::GetSetResult> GetSetOutcome;
			typedef std::future<GetSetOutcome> GetSetOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetSetRequest&, const GetSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSetAsyncHandler;
			typedef Outcome<Error, Model::GetVideoTaskResult> GetVideoTaskOutcome;
			typedef std::future<GetVideoTaskOutcome> GetVideoTaskOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetVideoTaskRequest&, const GetVideoTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVideoTaskAsyncHandler;
			typedef Outcome<Error, Model::ListSetsResult> ListSetsOutcome;
			typedef std::future<ListSetsOutcome> ListSetsOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ListSetsRequest&, const ListSetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSetsAsyncHandler;
			typedef Outcome<Error, Model::SearchDocIndexResult> SearchDocIndexOutcome;
			typedef std::future<SearchDocIndexOutcome> SearchDocIndexOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::SearchDocIndexRequest&, const SearchDocIndexOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchDocIndexAsyncHandler;
			typedef Outcome<Error, Model::ListPhotoProcessTasksResult> ListPhotoProcessTasksOutcome;
			typedef std::future<ListPhotoProcessTasksOutcome> ListPhotoProcessTasksOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ListPhotoProcessTasksRequest&, const ListPhotoProcessTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPhotoProcessTasksAsyncHandler;
			typedef Outcome<Error, Model::ListVideosResult> ListVideosOutcome;
			typedef std::future<ListVideosOutcome> ListVideosOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ListVideosRequest&, const ListVideosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVideosAsyncHandler;
			typedef Outcome<Error, Model::CreatePornBatchDetectJobResult> CreatePornBatchDetectJobOutcome;
			typedef std::future<CreatePornBatchDetectJobOutcome> CreatePornBatchDetectJobOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::CreatePornBatchDetectJobRequest&, const CreatePornBatchDetectJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePornBatchDetectJobAsyncHandler;
			typedef Outcome<Error, Model::FindImagesResult> FindImagesOutcome;
			typedef std::future<FindImagesOutcome> FindImagesOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::FindImagesRequest&, const FindImagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FindImagesAsyncHandler;
			typedef Outcome<Error, Model::DeleteTagByNameResult> DeleteTagByNameOutcome;
			typedef std::future<DeleteTagByNameOutcome> DeleteTagByNameOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DeleteTagByNameRequest&, const DeleteTagByNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTagByNameAsyncHandler;
			typedef Outcome<Error, Model::DetectImageLogosResult> DetectImageLogosOutcome;
			typedef std::future<DetectImageLogosOutcome> DetectImageLogosOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DetectImageLogosRequest&, const DetectImageLogosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectImageLogosAsyncHandler;
			typedef Outcome<Error, Model::GetProjectResult> GetProjectOutcome;
			typedef std::future<GetProjectOutcome> GetProjectOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetProjectRequest&, const GetProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetProjectAsyncHandler;
			typedef Outcome<Error, Model::DeletePhotoProcessTaskResult> DeletePhotoProcessTaskOutcome;
			typedef std::future<DeletePhotoProcessTaskOutcome> DeletePhotoProcessTaskOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DeletePhotoProcessTaskRequest&, const DeletePhotoProcessTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePhotoProcessTaskAsyncHandler;
			typedef Outcome<Error, Model::ListSetTagsResult> ListSetTagsOutcome;
			typedef std::future<ListSetTagsOutcome> ListSetTagsOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ListSetTagsRequest&, const ListSetTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSetTagsAsyncHandler;
			typedef Outcome<Error, Model::DeleteVideoTaskResult> DeleteVideoTaskOutcome;
			typedef std::future<DeleteVideoTaskOutcome> DeleteVideoTaskOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DeleteVideoTaskRequest&, const DeleteVideoTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVideoTaskAsyncHandler;
			typedef Outcome<Error, Model::FindImagesByTagNamesResult> FindImagesByTagNamesOutcome;
			typedef std::future<FindImagesByTagNamesOutcome> FindImagesByTagNamesOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::FindImagesByTagNamesRequest&, const FindImagesByTagNamesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FindImagesByTagNamesAsyncHandler;
			typedef Outcome<Error, Model::DeleteTagSetResult> DeleteTagSetOutcome;
			typedef std::future<DeleteTagSetOutcome> DeleteTagSetOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DeleteTagSetRequest&, const DeleteTagSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTagSetAsyncHandler;
			typedef Outcome<Error, Model::DeleteProjectResult> DeleteProjectOutcome;
			typedef std::future<DeleteProjectOutcome> DeleteProjectOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DeleteProjectRequest&, const DeleteProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProjectAsyncHandler;
			typedef Outcome<Error, Model::UpdateDocIndexMetaResult> UpdateDocIndexMetaOutcome;
			typedef std::future<UpdateDocIndexMetaOutcome> UpdateDocIndexMetaOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::UpdateDocIndexMetaRequest&, const UpdateDocIndexMetaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDocIndexMetaAsyncHandler;
			typedef Outcome<Error, Model::SearchFaceResult> SearchFaceOutcome;
			typedef std::future<SearchFaceOutcome> SearchFaceOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::SearchFaceRequest&, const SearchFaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchFaceAsyncHandler;
			typedef Outcome<Error, Model::GetImageResult> GetImageOutcome;
			typedef std::future<GetImageOutcome> GetImageOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetImageRequest&, const GetImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetImageAsyncHandler;
			typedef Outcome<Error, Model::DetectImageCelebrityResult> DetectImageCelebrityOutcome;
			typedef std::future<DetectImageCelebrityOutcome> DetectImageCelebrityOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DetectImageCelebrityRequest&, const DetectImageCelebrityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectImageCelebrityAsyncHandler;
			typedef Outcome<Error, Model::CreateSetResult> CreateSetOutcome;
			typedef std::future<CreateSetOutcome> CreateSetOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::CreateSetRequest&, const CreateSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSetAsyncHandler;
			typedef Outcome<Error, Model::DeletePornBatchDetectJobResult> DeletePornBatchDetectJobOutcome;
			typedef std::future<DeletePornBatchDetectJobOutcome> DeletePornBatchDetectJobOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DeletePornBatchDetectJobRequest&, const DeletePornBatchDetectJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePornBatchDetectJobAsyncHandler;
			typedef Outcome<Error, Model::ListFaceSearchGroupsResult> ListFaceSearchGroupsOutcome;
			typedef std::future<ListFaceSearchGroupsOutcome> ListFaceSearchGroupsOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ListFaceSearchGroupsRequest&, const ListFaceSearchGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFaceSearchGroupsAsyncHandler;
			typedef Outcome<Error, Model::GetTagSetResult> GetTagSetOutcome;
			typedef std::future<GetTagSetOutcome> GetTagSetOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetTagSetRequest&, const GetTagSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTagSetAsyncHandler;
			typedef Outcome<Error, Model::ConvertOfficeFormatResult> ConvertOfficeFormatOutcome;
			typedef std::future<ConvertOfficeFormatOutcome> ConvertOfficeFormatOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ConvertOfficeFormatRequest&, const ConvertOfficeFormatOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConvertOfficeFormatAsyncHandler;
			typedef Outcome<Error, Model::UpdateFaceGroupResult> UpdateFaceGroupOutcome;
			typedef std::future<UpdateFaceGroupOutcome> UpdateFaceGroupOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::UpdateFaceGroupRequest&, const UpdateFaceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFaceGroupAsyncHandler;
			typedef Outcome<Error, Model::ListTagPhotosResult> ListTagPhotosOutcome;
			typedef std::future<ListTagPhotosOutcome> ListTagPhotosOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ListTagPhotosRequest&, const ListTagPhotosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagPhotosAsyncHandler;
			typedef Outcome<Error, Model::DetectImageBodiesResult> DetectImageBodiesOutcome;
			typedef std::future<DetectImageBodiesOutcome> DetectImageBodiesOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DetectImageBodiesRequest&, const DetectImageBodiesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectImageBodiesAsyncHandler;
			typedef Outcome<Error, Model::DeleteFaceSearchImageByIdResult> DeleteFaceSearchImageByIdOutcome;
			typedef std::future<DeleteFaceSearchImageByIdOutcome> DeleteFaceSearchImageByIdOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DeleteFaceSearchImageByIdRequest&, const DeleteFaceSearchImageByIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFaceSearchImageByIdAsyncHandler;
			typedef Outcome<Error, Model::IndexVideoResult> IndexVideoOutcome;
			typedef std::future<IndexVideoOutcome> IndexVideoOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::IndexVideoRequest&, const IndexVideoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> IndexVideoAsyncHandler;
			typedef Outcome<Error, Model::DeleteDocIndexResult> DeleteDocIndexOutcome;
			typedef std::future<DeleteDocIndexOutcome> DeleteDocIndexOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DeleteDocIndexRequest&, const DeleteDocIndexOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDocIndexAsyncHandler;
			typedef Outcome<Error, Model::GetDocIndexTaskResult> GetDocIndexTaskOutcome;
			typedef std::future<GetDocIndexTaskOutcome> GetDocIndexTaskOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetDocIndexTaskRequest&, const GetDocIndexTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDocIndexTaskAsyncHandler;
			typedef Outcome<Error, Model::GetImageJobResult> GetImageJobOutcome;
			typedef std::future<GetImageJobOutcome> GetImageJobOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetImageJobRequest&, const GetImageJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetImageJobAsyncHandler;
			typedef Outcome<Error, Model::ListVideoAudiosResult> ListVideoAudiosOutcome;
			typedef std::future<ListVideoAudiosOutcome> ListVideoAudiosOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ListVideoAudiosRequest&, const ListVideoAudiosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVideoAudiosAsyncHandler;
			typedef Outcome<Error, Model::CreateMergeFaceGroupsJobResult> CreateMergeFaceGroupsJobOutcome;
			typedef std::future<CreateMergeFaceGroupsJobOutcome> CreateMergeFaceGroupsJobOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::CreateMergeFaceGroupsJobRequest&, const CreateMergeFaceGroupsJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMergeFaceGroupsJobAsyncHandler;
			typedef Outcome<Error, Model::DeleteTagByUrlResult> DeleteTagByUrlOutcome;
			typedef std::future<DeleteTagByUrlOutcome> DeleteTagByUrlOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DeleteTagByUrlRequest&, const DeleteTagByUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTagByUrlAsyncHandler;
			typedef Outcome<Error, Model::ListTagSetsResult> ListTagSetsOutcome;
			typedef std::future<ListTagSetsOutcome> ListTagSetsOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ListTagSetsRequest&, const ListTagSetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagSetsAsyncHandler;
			typedef Outcome<Error, Model::ListTagNamesResult> ListTagNamesOutcome;
			typedef std::future<ListTagNamesOutcome> ListTagNamesOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ListTagNamesRequest&, const ListTagNamesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagNamesAsyncHandler;
			typedef Outcome<Error, Model::CreateOfficeConversionTaskResult> CreateOfficeConversionTaskOutcome;
			typedef std::future<CreateOfficeConversionTaskOutcome> CreateOfficeConversionTaskOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::CreateOfficeConversionTaskRequest&, const CreateOfficeConversionTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOfficeConversionTaskAsyncHandler;
			typedef Outcome<Error, Model::DetectQRCodesResult> DetectQRCodesOutcome;
			typedef std::future<DetectQRCodesOutcome> DetectQRCodesOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DetectQRCodesRequest&, const DetectQRCodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectQRCodesAsyncHandler;
			typedef Outcome<Error, Model::GetFaceSearchGroupResult> GetFaceSearchGroupOutcome;
			typedef std::future<GetFaceSearchGroupOutcome> GetFaceSearchGroupOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetFaceSearchGroupRequest&, const GetFaceSearchGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetFaceSearchGroupAsyncHandler;
			typedef Outcome<Error, Model::GetVideoResult> GetVideoOutcome;
			typedef std::future<GetVideoOutcome> GetVideoOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetVideoRequest&, const GetVideoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVideoAsyncHandler;
			typedef Outcome<Error, Model::ListImagesResult> ListImagesOutcome;
			typedef std::future<ListImagesOutcome> ListImagesOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ListImagesRequest&, const ListImagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListImagesAsyncHandler;
			typedef Outcome<Error, Model::CompareImageFacesResult> CompareImageFacesOutcome;
			typedef std::future<CompareImageFacesOutcome> CompareImageFacesOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::CompareImageFacesRequest&, const CompareImageFacesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CompareImageFacesAsyncHandler;
			typedef Outcome<Error, Model::DeleteTagJobResult> DeleteTagJobOutcome;
			typedef std::future<DeleteTagJobOutcome> DeleteTagJobOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DeleteTagJobRequest&, const DeleteTagJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTagJobAsyncHandler;
			typedef Outcome<Error, Model::DeleteOfficeConversionTaskResult> DeleteOfficeConversionTaskOutcome;
			typedef std::future<DeleteOfficeConversionTaskOutcome> DeleteOfficeConversionTaskOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DeleteOfficeConversionTaskRequest&, const DeleteOfficeConversionTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOfficeConversionTaskAsyncHandler;
			typedef Outcome<Error, Model::PhotoProcessResult> PhotoProcessOutcome;
			typedef std::future<PhotoProcessOutcome> PhotoProcessOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::PhotoProcessRequest&, const PhotoProcessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PhotoProcessAsyncHandler;
			typedef Outcome<Error, Model::GetPhotoProcessTaskResult> GetPhotoProcessTaskOutcome;
			typedef std::future<GetPhotoProcessTaskOutcome> GetPhotoProcessTaskOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetPhotoProcessTaskRequest&, const GetPhotoProcessTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPhotoProcessTaskAsyncHandler;
			typedef Outcome<Error, Model::ListVideoFramesResult> ListVideoFramesOutcome;
			typedef std::future<ListVideoFramesOutcome> ListVideoFramesOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ListVideoFramesRequest&, const ListVideoFramesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVideoFramesAsyncHandler;
			typedef Outcome<Error, Model::GetPornBatchDetectJobResult> GetPornBatchDetectJobOutcome;
			typedef std::future<GetPornBatchDetectJobOutcome> GetPornBatchDetectJobOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetPornBatchDetectJobRequest&, const GetPornBatchDetectJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPornBatchDetectJobAsyncHandler;
			typedef Outcome<Error, Model::DetectLogoResult> DetectLogoOutcome;
			typedef std::future<DetectLogoOutcome> DetectLogoOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DetectLogoRequest&, const DetectLogoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectLogoAsyncHandler;
			typedef Outcome<Error, Model::DetectClothesResult> DetectClothesOutcome;
			typedef std::future<DetectClothesOutcome> DetectClothesOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DetectClothesRequest&, const DetectClothesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectClothesAsyncHandler;
			typedef Outcome<Error, Model::ListTagJobsResult> ListTagJobsOutcome;
			typedef std::future<ListTagJobsOutcome> ListTagJobsOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ListTagJobsRequest&, const ListTagJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagJobsAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DeleteFaceSearchUserResult> DeleteFaceSearchUserOutcome;
			typedef std::future<DeleteFaceSearchUserOutcome> DeleteFaceSearchUserOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DeleteFaceSearchUserRequest&, const DeleteFaceSearchUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFaceSearchUserAsyncHandler;
			typedef Outcome<Error, Model::GetOfficeConversionTaskResult> GetOfficeConversionTaskOutcome;
			typedef std::future<GetOfficeConversionTaskOutcome> GetOfficeConversionTaskOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetOfficeConversionTaskRequest&, const GetOfficeConversionTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOfficeConversionTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateTagSetResult> CreateTagSetOutcome;
			typedef std::future<CreateTagSetOutcome> CreateTagSetOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::CreateTagSetRequest&, const CreateTagSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTagSetAsyncHandler;
			typedef Outcome<Error, Model::RegistFaceResult> RegistFaceOutcome;
			typedef std::future<RegistFaceOutcome> RegistFaceOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::RegistFaceRequest&, const RegistFaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RegistFaceAsyncHandler;
			typedef Outcome<Error, Model::FindSimilarFacesResult> FindSimilarFacesOutcome;
			typedef std::future<FindSimilarFacesOutcome> FindSimilarFacesOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::FindSimilarFacesRequest&, const FindSimilarFacesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FindSimilarFacesAsyncHandler;
			typedef Outcome<Error, Model::GetFaceSearchUserResult> GetFaceSearchUserOutcome;
			typedef std::future<GetFaceSearchUserOutcome> GetFaceSearchUserOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetFaceSearchUserRequest&, const GetFaceSearchUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetFaceSearchUserAsyncHandler;
			typedef Outcome<Error, Model::DeleteImageJobResult> DeleteImageJobOutcome;
			typedef std::future<DeleteImageJobOutcome> DeleteImageJobOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DeleteImageJobRequest&, const DeleteImageJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageJobAsyncHandler;
			typedef Outcome<Error, Model::CreateFaceSetResult> CreateFaceSetOutcome;
			typedef std::future<CreateFaceSetOutcome> CreateFaceSetOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::CreateFaceSetRequest&, const CreateFaceSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFaceSetAsyncHandler;
			typedef Outcome<Error, Model::DeleteFaceSearchGroupResult> DeleteFaceSearchGroupOutcome;
			typedef std::future<DeleteFaceSearchGroupOutcome> DeleteFaceSearchGroupOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DeleteFaceSearchGroupRequest&, const DeleteFaceSearchGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFaceSearchGroupAsyncHandler;
			typedef Outcome<Error, Model::GetDocIndexResult> GetDocIndexOutcome;
			typedef std::future<GetDocIndexOutcome> GetDocIndexOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetDocIndexRequest&, const GetDocIndexOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDocIndexAsyncHandler;
			typedef Outcome<Error, Model::IndexImageResult> IndexImageOutcome;
			typedef std::future<IndexImageOutcome> IndexImageOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::IndexImageRequest&, const IndexImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> IndexImageAsyncHandler;
			typedef Outcome<Error, Model::DetectImageTextsResult> DetectImageTextsOutcome;
			typedef std::future<DetectImageTextsOutcome> DetectImageTextsOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DetectImageTextsRequest&, const DetectImageTextsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectImageTextsAsyncHandler;
			typedef Outcome<Error, Model::ListImageJobsResult> ListImageJobsOutcome;
			typedef std::future<ListImageJobsOutcome> ListImageJobsOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ListImageJobsRequest&, const ListImageJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListImageJobsAsyncHandler;
			typedef Outcome<Error, Model::CreateGroupFacesJobResult> CreateGroupFacesJobOutcome;
			typedef std::future<CreateGroupFacesJobOutcome> CreateGroupFacesJobOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::CreateGroupFacesJobRequest&, const CreateGroupFacesJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateGroupFacesJobAsyncHandler;
			typedef Outcome<Error, Model::UpdateImageResult> UpdateImageOutcome;
			typedef std::future<UpdateImageOutcome> UpdateImageOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::UpdateImageRequest&, const UpdateImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateImageAsyncHandler;
			typedef Outcome<Error, Model::ListVideoTasksResult> ListVideoTasksOutcome;
			typedef std::future<ListVideoTasksOutcome> ListVideoTasksOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ListVideoTasksRequest&, const ListVideoTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVideoTasksAsyncHandler;
			typedef Outcome<Error, Model::CreateVideoCompressTaskResult> CreateVideoCompressTaskOutcome;
			typedef std::future<CreateVideoCompressTaskOutcome> CreateVideoCompressTaskOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::CreateVideoCompressTaskRequest&, const CreateVideoCompressTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVideoCompressTaskAsyncHandler;
			typedef Outcome<Error, Model::UpdateProjectResult> UpdateProjectOutcome;
			typedef std::future<UpdateProjectOutcome> UpdateProjectOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::UpdateProjectRequest&, const UpdateProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateProjectAsyncHandler;
			typedef Outcome<Error, Model::DeleteVideoResult> DeleteVideoOutcome;
			typedef std::future<DeleteVideoOutcome> DeleteVideoOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DeleteVideoRequest&, const DeleteVideoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVideoAsyncHandler;
			typedef Outcome<Error, Model::ListOfficeConversionTaskResult> ListOfficeConversionTaskOutcome;
			typedef std::future<ListOfficeConversionTaskOutcome> ListOfficeConversionTaskOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ListOfficeConversionTaskRequest&, const ListOfficeConversionTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOfficeConversionTaskAsyncHandler;
			typedef Outcome<Error, Model::UpdateSetResult> UpdateSetOutcome;
			typedef std::future<UpdateSetOutcome> UpdateSetOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::UpdateSetRequest&, const UpdateSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSetAsyncHandler;
			typedef Outcome<Error, Model::ListFaceGroupsResult> ListFaceGroupsOutcome;
			typedef std::future<ListFaceGroupsOutcome> ListFaceGroupsOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ListFaceGroupsRequest&, const ListFaceGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFaceGroupsAsyncHandler;

			ImmClient(const Credentials &credentials, const ClientConfiguration &configuration);
			ImmClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			ImmClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~ImmClient();
			ListPornBatchDetectJobsOutcome listPornBatchDetectJobs(const Model::ListPornBatchDetectJobsRequest &request)const;
			void listPornBatchDetectJobsAsync(const Model::ListPornBatchDetectJobsRequest& request, const ListPornBatchDetectJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPornBatchDetectJobsOutcomeCallable listPornBatchDetectJobsCallable(const Model::ListPornBatchDetectJobsRequest& request) const;
			DetectImageFacesOutcome detectImageFaces(const Model::DetectImageFacesRequest &request)const;
			void detectImageFacesAsync(const Model::DetectImageFacesRequest& request, const DetectImageFacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectImageFacesOutcomeCallable detectImageFacesCallable(const Model::DetectImageFacesRequest& request) const;
			DetectImageTagsOutcome detectImageTags(const Model::DetectImageTagsRequest &request)const;
			void detectImageTagsAsync(const Model::DetectImageTagsRequest& request, const DetectImageTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectImageTagsOutcomeCallable detectImageTagsCallable(const Model::DetectImageTagsRequest& request) const;
			DeleteImageOutcome deleteImage(const Model::DeleteImageRequest &request)const;
			void deleteImageAsync(const Model::DeleteImageRequest& request, const DeleteImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteImageOutcomeCallable deleteImageCallable(const Model::DeleteImageRequest& request) const;
			CreateTagJobOutcome createTagJob(const Model::CreateTagJobRequest &request)const;
			void createTagJobAsync(const Model::CreateTagJobRequest& request, const CreateTagJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTagJobOutcomeCallable createTagJobCallable(const Model::CreateTagJobRequest& request) const;
			IndexTagOutcome indexTag(const Model::IndexTagRequest &request)const;
			void indexTagAsync(const Model::IndexTagRequest& request, const IndexTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			IndexTagOutcomeCallable indexTagCallable(const Model::IndexTagRequest& request) const;
			ListProjectsOutcome listProjects(const Model::ListProjectsRequest &request)const;
			void listProjectsAsync(const Model::ListProjectsRequest& request, const ListProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProjectsOutcomeCallable listProjectsCallable(const Model::ListProjectsRequest& request) const;
			DeleteSetOutcome deleteSet(const Model::DeleteSetRequest &request)const;
			void deleteSetAsync(const Model::DeleteSetRequest& request, const DeleteSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSetOutcomeCallable deleteSetCallable(const Model::DeleteSetRequest& request) const;
			GetFaceSearchImageOutcome getFaceSearchImage(const Model::GetFaceSearchImageRequest &request)const;
			void getFaceSearchImageAsync(const Model::GetFaceSearchImageRequest& request, const GetFaceSearchImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetFaceSearchImageOutcomeCallable getFaceSearchImageCallable(const Model::GetFaceSearchImageRequest& request) const;
			CreateVideoAnalyseTaskOutcome createVideoAnalyseTask(const Model::CreateVideoAnalyseTaskRequest &request)const;
			void createVideoAnalyseTaskAsync(const Model::CreateVideoAnalyseTaskRequest& request, const CreateVideoAnalyseTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVideoAnalyseTaskOutcomeCallable createVideoAnalyseTaskCallable(const Model::CreateVideoAnalyseTaskRequest& request) const;
			CompareFaceOutcome compareFace(const Model::CompareFaceRequest &request)const;
			void compareFaceAsync(const Model::CompareFaceRequest& request, const CompareFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CompareFaceOutcomeCallable compareFaceCallable(const Model::CompareFaceRequest& request) const;
			DetectTagOutcome detectTag(const Model::DetectTagRequest &request)const;
			void detectTagAsync(const Model::DetectTagRequest& request, const DetectTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectTagOutcomeCallable detectTagCallable(const Model::DetectTagRequest& request) const;
			ListFaceSearchGroupUsersOutcome listFaceSearchGroupUsers(const Model::ListFaceSearchGroupUsersRequest &request)const;
			void listFaceSearchGroupUsersAsync(const Model::ListFaceSearchGroupUsersRequest& request, const ListFaceSearchGroupUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFaceSearchGroupUsersOutcomeCallable listFaceSearchGroupUsersCallable(const Model::ListFaceSearchGroupUsersRequest& request) const;
			ListFaceSearchGroupImagesOutcome listFaceSearchGroupImages(const Model::ListFaceSearchGroupImagesRequest &request)const;
			void listFaceSearchGroupImagesAsync(const Model::ListFaceSearchGroupImagesRequest& request, const ListFaceSearchGroupImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFaceSearchGroupImagesOutcomeCallable listFaceSearchGroupImagesCallable(const Model::ListFaceSearchGroupImagesRequest& request) const;
			CreateCADConversionTaskOutcome createCADConversionTask(const Model::CreateCADConversionTaskRequest &request)const;
			void createCADConversionTaskAsync(const Model::CreateCADConversionTaskRequest& request, const CreateCADConversionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCADConversionTaskOutcomeCallable createCADConversionTaskCallable(const Model::CreateCADConversionTaskRequest& request) const;
			GetTagJobOutcome getTagJob(const Model::GetTagJobRequest &request)const;
			void getTagJobAsync(const Model::GetTagJobRequest& request, const GetTagJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTagJobOutcomeCallable getTagJobCallable(const Model::GetTagJobRequest& request) const;
			DeleteFaceJobOutcome deleteFaceJob(const Model::DeleteFaceJobRequest &request)const;
			void deleteFaceJobAsync(const Model::DeleteFaceJobRequest& request, const DeleteFaceJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFaceJobOutcomeCallable deleteFaceJobCallable(const Model::DeleteFaceJobRequest& request) const;
			CreateDocIndexTaskOutcome createDocIndexTask(const Model::CreateDocIndexTaskRequest &request)const;
			void createDocIndexTaskAsync(const Model::CreateDocIndexTaskRequest& request, const CreateDocIndexTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDocIndexTaskOutcomeCallable createDocIndexTaskCallable(const Model::CreateDocIndexTaskRequest& request) const;
			PutProjectOutcome putProject(const Model::PutProjectRequest &request)const;
			void putProjectAsync(const Model::PutProjectRequest& request, const PutProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PutProjectOutcomeCallable putProjectCallable(const Model::PutProjectRequest& request) const;
			GetSetOutcome getSet(const Model::GetSetRequest &request)const;
			void getSetAsync(const Model::GetSetRequest& request, const GetSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSetOutcomeCallable getSetCallable(const Model::GetSetRequest& request) const;
			GetVideoTaskOutcome getVideoTask(const Model::GetVideoTaskRequest &request)const;
			void getVideoTaskAsync(const Model::GetVideoTaskRequest& request, const GetVideoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVideoTaskOutcomeCallable getVideoTaskCallable(const Model::GetVideoTaskRequest& request) const;
			ListSetsOutcome listSets(const Model::ListSetsRequest &request)const;
			void listSetsAsync(const Model::ListSetsRequest& request, const ListSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSetsOutcomeCallable listSetsCallable(const Model::ListSetsRequest& request) const;
			SearchDocIndexOutcome searchDocIndex(const Model::SearchDocIndexRequest &request)const;
			void searchDocIndexAsync(const Model::SearchDocIndexRequest& request, const SearchDocIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchDocIndexOutcomeCallable searchDocIndexCallable(const Model::SearchDocIndexRequest& request) const;
			ListPhotoProcessTasksOutcome listPhotoProcessTasks(const Model::ListPhotoProcessTasksRequest &request)const;
			void listPhotoProcessTasksAsync(const Model::ListPhotoProcessTasksRequest& request, const ListPhotoProcessTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPhotoProcessTasksOutcomeCallable listPhotoProcessTasksCallable(const Model::ListPhotoProcessTasksRequest& request) const;
			ListVideosOutcome listVideos(const Model::ListVideosRequest &request)const;
			void listVideosAsync(const Model::ListVideosRequest& request, const ListVideosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVideosOutcomeCallable listVideosCallable(const Model::ListVideosRequest& request) const;
			CreatePornBatchDetectJobOutcome createPornBatchDetectJob(const Model::CreatePornBatchDetectJobRequest &request)const;
			void createPornBatchDetectJobAsync(const Model::CreatePornBatchDetectJobRequest& request, const CreatePornBatchDetectJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePornBatchDetectJobOutcomeCallable createPornBatchDetectJobCallable(const Model::CreatePornBatchDetectJobRequest& request) const;
			FindImagesOutcome findImages(const Model::FindImagesRequest &request)const;
			void findImagesAsync(const Model::FindImagesRequest& request, const FindImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FindImagesOutcomeCallable findImagesCallable(const Model::FindImagesRequest& request) const;
			DeleteTagByNameOutcome deleteTagByName(const Model::DeleteTagByNameRequest &request)const;
			void deleteTagByNameAsync(const Model::DeleteTagByNameRequest& request, const DeleteTagByNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTagByNameOutcomeCallable deleteTagByNameCallable(const Model::DeleteTagByNameRequest& request) const;
			DetectImageLogosOutcome detectImageLogos(const Model::DetectImageLogosRequest &request)const;
			void detectImageLogosAsync(const Model::DetectImageLogosRequest& request, const DetectImageLogosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectImageLogosOutcomeCallable detectImageLogosCallable(const Model::DetectImageLogosRequest& request) const;
			GetProjectOutcome getProject(const Model::GetProjectRequest &request)const;
			void getProjectAsync(const Model::GetProjectRequest& request, const GetProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetProjectOutcomeCallable getProjectCallable(const Model::GetProjectRequest& request) const;
			DeletePhotoProcessTaskOutcome deletePhotoProcessTask(const Model::DeletePhotoProcessTaskRequest &request)const;
			void deletePhotoProcessTaskAsync(const Model::DeletePhotoProcessTaskRequest& request, const DeletePhotoProcessTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePhotoProcessTaskOutcomeCallable deletePhotoProcessTaskCallable(const Model::DeletePhotoProcessTaskRequest& request) const;
			ListSetTagsOutcome listSetTags(const Model::ListSetTagsRequest &request)const;
			void listSetTagsAsync(const Model::ListSetTagsRequest& request, const ListSetTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSetTagsOutcomeCallable listSetTagsCallable(const Model::ListSetTagsRequest& request) const;
			DeleteVideoTaskOutcome deleteVideoTask(const Model::DeleteVideoTaskRequest &request)const;
			void deleteVideoTaskAsync(const Model::DeleteVideoTaskRequest& request, const DeleteVideoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVideoTaskOutcomeCallable deleteVideoTaskCallable(const Model::DeleteVideoTaskRequest& request) const;
			FindImagesByTagNamesOutcome findImagesByTagNames(const Model::FindImagesByTagNamesRequest &request)const;
			void findImagesByTagNamesAsync(const Model::FindImagesByTagNamesRequest& request, const FindImagesByTagNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FindImagesByTagNamesOutcomeCallable findImagesByTagNamesCallable(const Model::FindImagesByTagNamesRequest& request) const;
			DeleteTagSetOutcome deleteTagSet(const Model::DeleteTagSetRequest &request)const;
			void deleteTagSetAsync(const Model::DeleteTagSetRequest& request, const DeleteTagSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTagSetOutcomeCallable deleteTagSetCallable(const Model::DeleteTagSetRequest& request) const;
			DeleteProjectOutcome deleteProject(const Model::DeleteProjectRequest &request)const;
			void deleteProjectAsync(const Model::DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteProjectOutcomeCallable deleteProjectCallable(const Model::DeleteProjectRequest& request) const;
			UpdateDocIndexMetaOutcome updateDocIndexMeta(const Model::UpdateDocIndexMetaRequest &request)const;
			void updateDocIndexMetaAsync(const Model::UpdateDocIndexMetaRequest& request, const UpdateDocIndexMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDocIndexMetaOutcomeCallable updateDocIndexMetaCallable(const Model::UpdateDocIndexMetaRequest& request) const;
			SearchFaceOutcome searchFace(const Model::SearchFaceRequest &request)const;
			void searchFaceAsync(const Model::SearchFaceRequest& request, const SearchFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchFaceOutcomeCallable searchFaceCallable(const Model::SearchFaceRequest& request) const;
			GetImageOutcome getImage(const Model::GetImageRequest &request)const;
			void getImageAsync(const Model::GetImageRequest& request, const GetImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetImageOutcomeCallable getImageCallable(const Model::GetImageRequest& request) const;
			DetectImageCelebrityOutcome detectImageCelebrity(const Model::DetectImageCelebrityRequest &request)const;
			void detectImageCelebrityAsync(const Model::DetectImageCelebrityRequest& request, const DetectImageCelebrityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectImageCelebrityOutcomeCallable detectImageCelebrityCallable(const Model::DetectImageCelebrityRequest& request) const;
			CreateSetOutcome createSet(const Model::CreateSetRequest &request)const;
			void createSetAsync(const Model::CreateSetRequest& request, const CreateSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSetOutcomeCallable createSetCallable(const Model::CreateSetRequest& request) const;
			DeletePornBatchDetectJobOutcome deletePornBatchDetectJob(const Model::DeletePornBatchDetectJobRequest &request)const;
			void deletePornBatchDetectJobAsync(const Model::DeletePornBatchDetectJobRequest& request, const DeletePornBatchDetectJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePornBatchDetectJobOutcomeCallable deletePornBatchDetectJobCallable(const Model::DeletePornBatchDetectJobRequest& request) const;
			ListFaceSearchGroupsOutcome listFaceSearchGroups(const Model::ListFaceSearchGroupsRequest &request)const;
			void listFaceSearchGroupsAsync(const Model::ListFaceSearchGroupsRequest& request, const ListFaceSearchGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFaceSearchGroupsOutcomeCallable listFaceSearchGroupsCallable(const Model::ListFaceSearchGroupsRequest& request) const;
			GetTagSetOutcome getTagSet(const Model::GetTagSetRequest &request)const;
			void getTagSetAsync(const Model::GetTagSetRequest& request, const GetTagSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTagSetOutcomeCallable getTagSetCallable(const Model::GetTagSetRequest& request) const;
			ConvertOfficeFormatOutcome convertOfficeFormat(const Model::ConvertOfficeFormatRequest &request)const;
			void convertOfficeFormatAsync(const Model::ConvertOfficeFormatRequest& request, const ConvertOfficeFormatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConvertOfficeFormatOutcomeCallable convertOfficeFormatCallable(const Model::ConvertOfficeFormatRequest& request) const;
			UpdateFaceGroupOutcome updateFaceGroup(const Model::UpdateFaceGroupRequest &request)const;
			void updateFaceGroupAsync(const Model::UpdateFaceGroupRequest& request, const UpdateFaceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateFaceGroupOutcomeCallable updateFaceGroupCallable(const Model::UpdateFaceGroupRequest& request) const;
			ListTagPhotosOutcome listTagPhotos(const Model::ListTagPhotosRequest &request)const;
			void listTagPhotosAsync(const Model::ListTagPhotosRequest& request, const ListTagPhotosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagPhotosOutcomeCallable listTagPhotosCallable(const Model::ListTagPhotosRequest& request) const;
			DetectImageBodiesOutcome detectImageBodies(const Model::DetectImageBodiesRequest &request)const;
			void detectImageBodiesAsync(const Model::DetectImageBodiesRequest& request, const DetectImageBodiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectImageBodiesOutcomeCallable detectImageBodiesCallable(const Model::DetectImageBodiesRequest& request) const;
			DeleteFaceSearchImageByIdOutcome deleteFaceSearchImageById(const Model::DeleteFaceSearchImageByIdRequest &request)const;
			void deleteFaceSearchImageByIdAsync(const Model::DeleteFaceSearchImageByIdRequest& request, const DeleteFaceSearchImageByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFaceSearchImageByIdOutcomeCallable deleteFaceSearchImageByIdCallable(const Model::DeleteFaceSearchImageByIdRequest& request) const;
			IndexVideoOutcome indexVideo(const Model::IndexVideoRequest &request)const;
			void indexVideoAsync(const Model::IndexVideoRequest& request, const IndexVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			IndexVideoOutcomeCallable indexVideoCallable(const Model::IndexVideoRequest& request) const;
			DeleteDocIndexOutcome deleteDocIndex(const Model::DeleteDocIndexRequest &request)const;
			void deleteDocIndexAsync(const Model::DeleteDocIndexRequest& request, const DeleteDocIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDocIndexOutcomeCallable deleteDocIndexCallable(const Model::DeleteDocIndexRequest& request) const;
			GetDocIndexTaskOutcome getDocIndexTask(const Model::GetDocIndexTaskRequest &request)const;
			void getDocIndexTaskAsync(const Model::GetDocIndexTaskRequest& request, const GetDocIndexTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDocIndexTaskOutcomeCallable getDocIndexTaskCallable(const Model::GetDocIndexTaskRequest& request) const;
			GetImageJobOutcome getImageJob(const Model::GetImageJobRequest &request)const;
			void getImageJobAsync(const Model::GetImageJobRequest& request, const GetImageJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetImageJobOutcomeCallable getImageJobCallable(const Model::GetImageJobRequest& request) const;
			ListVideoAudiosOutcome listVideoAudios(const Model::ListVideoAudiosRequest &request)const;
			void listVideoAudiosAsync(const Model::ListVideoAudiosRequest& request, const ListVideoAudiosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVideoAudiosOutcomeCallable listVideoAudiosCallable(const Model::ListVideoAudiosRequest& request) const;
			CreateMergeFaceGroupsJobOutcome createMergeFaceGroupsJob(const Model::CreateMergeFaceGroupsJobRequest &request)const;
			void createMergeFaceGroupsJobAsync(const Model::CreateMergeFaceGroupsJobRequest& request, const CreateMergeFaceGroupsJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMergeFaceGroupsJobOutcomeCallable createMergeFaceGroupsJobCallable(const Model::CreateMergeFaceGroupsJobRequest& request) const;
			DeleteTagByUrlOutcome deleteTagByUrl(const Model::DeleteTagByUrlRequest &request)const;
			void deleteTagByUrlAsync(const Model::DeleteTagByUrlRequest& request, const DeleteTagByUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTagByUrlOutcomeCallable deleteTagByUrlCallable(const Model::DeleteTagByUrlRequest& request) const;
			ListTagSetsOutcome listTagSets(const Model::ListTagSetsRequest &request)const;
			void listTagSetsAsync(const Model::ListTagSetsRequest& request, const ListTagSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagSetsOutcomeCallable listTagSetsCallable(const Model::ListTagSetsRequest& request) const;
			ListTagNamesOutcome listTagNames(const Model::ListTagNamesRequest &request)const;
			void listTagNamesAsync(const Model::ListTagNamesRequest& request, const ListTagNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagNamesOutcomeCallable listTagNamesCallable(const Model::ListTagNamesRequest& request) const;
			CreateOfficeConversionTaskOutcome createOfficeConversionTask(const Model::CreateOfficeConversionTaskRequest &request)const;
			void createOfficeConversionTaskAsync(const Model::CreateOfficeConversionTaskRequest& request, const CreateOfficeConversionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOfficeConversionTaskOutcomeCallable createOfficeConversionTaskCallable(const Model::CreateOfficeConversionTaskRequest& request) const;
			DetectQRCodesOutcome detectQRCodes(const Model::DetectQRCodesRequest &request)const;
			void detectQRCodesAsync(const Model::DetectQRCodesRequest& request, const DetectQRCodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectQRCodesOutcomeCallable detectQRCodesCallable(const Model::DetectQRCodesRequest& request) const;
			GetFaceSearchGroupOutcome getFaceSearchGroup(const Model::GetFaceSearchGroupRequest &request)const;
			void getFaceSearchGroupAsync(const Model::GetFaceSearchGroupRequest& request, const GetFaceSearchGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetFaceSearchGroupOutcomeCallable getFaceSearchGroupCallable(const Model::GetFaceSearchGroupRequest& request) const;
			GetVideoOutcome getVideo(const Model::GetVideoRequest &request)const;
			void getVideoAsync(const Model::GetVideoRequest& request, const GetVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVideoOutcomeCallable getVideoCallable(const Model::GetVideoRequest& request) const;
			ListImagesOutcome listImages(const Model::ListImagesRequest &request)const;
			void listImagesAsync(const Model::ListImagesRequest& request, const ListImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListImagesOutcomeCallable listImagesCallable(const Model::ListImagesRequest& request) const;
			CompareImageFacesOutcome compareImageFaces(const Model::CompareImageFacesRequest &request)const;
			void compareImageFacesAsync(const Model::CompareImageFacesRequest& request, const CompareImageFacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CompareImageFacesOutcomeCallable compareImageFacesCallable(const Model::CompareImageFacesRequest& request) const;
			DeleteTagJobOutcome deleteTagJob(const Model::DeleteTagJobRequest &request)const;
			void deleteTagJobAsync(const Model::DeleteTagJobRequest& request, const DeleteTagJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTagJobOutcomeCallable deleteTagJobCallable(const Model::DeleteTagJobRequest& request) const;
			DeleteOfficeConversionTaskOutcome deleteOfficeConversionTask(const Model::DeleteOfficeConversionTaskRequest &request)const;
			void deleteOfficeConversionTaskAsync(const Model::DeleteOfficeConversionTaskRequest& request, const DeleteOfficeConversionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteOfficeConversionTaskOutcomeCallable deleteOfficeConversionTaskCallable(const Model::DeleteOfficeConversionTaskRequest& request) const;
			PhotoProcessOutcome photoProcess(const Model::PhotoProcessRequest &request)const;
			void photoProcessAsync(const Model::PhotoProcessRequest& request, const PhotoProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PhotoProcessOutcomeCallable photoProcessCallable(const Model::PhotoProcessRequest& request) const;
			GetPhotoProcessTaskOutcome getPhotoProcessTask(const Model::GetPhotoProcessTaskRequest &request)const;
			void getPhotoProcessTaskAsync(const Model::GetPhotoProcessTaskRequest& request, const GetPhotoProcessTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPhotoProcessTaskOutcomeCallable getPhotoProcessTaskCallable(const Model::GetPhotoProcessTaskRequest& request) const;
			ListVideoFramesOutcome listVideoFrames(const Model::ListVideoFramesRequest &request)const;
			void listVideoFramesAsync(const Model::ListVideoFramesRequest& request, const ListVideoFramesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVideoFramesOutcomeCallable listVideoFramesCallable(const Model::ListVideoFramesRequest& request) const;
			GetPornBatchDetectJobOutcome getPornBatchDetectJob(const Model::GetPornBatchDetectJobRequest &request)const;
			void getPornBatchDetectJobAsync(const Model::GetPornBatchDetectJobRequest& request, const GetPornBatchDetectJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPornBatchDetectJobOutcomeCallable getPornBatchDetectJobCallable(const Model::GetPornBatchDetectJobRequest& request) const;
			DetectLogoOutcome detectLogo(const Model::DetectLogoRequest &request)const;
			void detectLogoAsync(const Model::DetectLogoRequest& request, const DetectLogoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectLogoOutcomeCallable detectLogoCallable(const Model::DetectLogoRequest& request) const;
			DetectClothesOutcome detectClothes(const Model::DetectClothesRequest &request)const;
			void detectClothesAsync(const Model::DetectClothesRequest& request, const DetectClothesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectClothesOutcomeCallable detectClothesCallable(const Model::DetectClothesRequest& request) const;
			ListTagJobsOutcome listTagJobs(const Model::ListTagJobsRequest &request)const;
			void listTagJobsAsync(const Model::ListTagJobsRequest& request, const ListTagJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagJobsOutcomeCallable listTagJobsCallable(const Model::ListTagJobsRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DeleteFaceSearchUserOutcome deleteFaceSearchUser(const Model::DeleteFaceSearchUserRequest &request)const;
			void deleteFaceSearchUserAsync(const Model::DeleteFaceSearchUserRequest& request, const DeleteFaceSearchUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFaceSearchUserOutcomeCallable deleteFaceSearchUserCallable(const Model::DeleteFaceSearchUserRequest& request) const;
			GetOfficeConversionTaskOutcome getOfficeConversionTask(const Model::GetOfficeConversionTaskRequest &request)const;
			void getOfficeConversionTaskAsync(const Model::GetOfficeConversionTaskRequest& request, const GetOfficeConversionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOfficeConversionTaskOutcomeCallable getOfficeConversionTaskCallable(const Model::GetOfficeConversionTaskRequest& request) const;
			CreateTagSetOutcome createTagSet(const Model::CreateTagSetRequest &request)const;
			void createTagSetAsync(const Model::CreateTagSetRequest& request, const CreateTagSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTagSetOutcomeCallable createTagSetCallable(const Model::CreateTagSetRequest& request) const;
			RegistFaceOutcome registFace(const Model::RegistFaceRequest &request)const;
			void registFaceAsync(const Model::RegistFaceRequest& request, const RegistFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RegistFaceOutcomeCallable registFaceCallable(const Model::RegistFaceRequest& request) const;
			FindSimilarFacesOutcome findSimilarFaces(const Model::FindSimilarFacesRequest &request)const;
			void findSimilarFacesAsync(const Model::FindSimilarFacesRequest& request, const FindSimilarFacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FindSimilarFacesOutcomeCallable findSimilarFacesCallable(const Model::FindSimilarFacesRequest& request) const;
			GetFaceSearchUserOutcome getFaceSearchUser(const Model::GetFaceSearchUserRequest &request)const;
			void getFaceSearchUserAsync(const Model::GetFaceSearchUserRequest& request, const GetFaceSearchUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetFaceSearchUserOutcomeCallable getFaceSearchUserCallable(const Model::GetFaceSearchUserRequest& request) const;
			DeleteImageJobOutcome deleteImageJob(const Model::DeleteImageJobRequest &request)const;
			void deleteImageJobAsync(const Model::DeleteImageJobRequest& request, const DeleteImageJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteImageJobOutcomeCallable deleteImageJobCallable(const Model::DeleteImageJobRequest& request) const;
			CreateFaceSetOutcome createFaceSet(const Model::CreateFaceSetRequest &request)const;
			void createFaceSetAsync(const Model::CreateFaceSetRequest& request, const CreateFaceSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFaceSetOutcomeCallable createFaceSetCallable(const Model::CreateFaceSetRequest& request) const;
			DeleteFaceSearchGroupOutcome deleteFaceSearchGroup(const Model::DeleteFaceSearchGroupRequest &request)const;
			void deleteFaceSearchGroupAsync(const Model::DeleteFaceSearchGroupRequest& request, const DeleteFaceSearchGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFaceSearchGroupOutcomeCallable deleteFaceSearchGroupCallable(const Model::DeleteFaceSearchGroupRequest& request) const;
			GetDocIndexOutcome getDocIndex(const Model::GetDocIndexRequest &request)const;
			void getDocIndexAsync(const Model::GetDocIndexRequest& request, const GetDocIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDocIndexOutcomeCallable getDocIndexCallable(const Model::GetDocIndexRequest& request) const;
			IndexImageOutcome indexImage(const Model::IndexImageRequest &request)const;
			void indexImageAsync(const Model::IndexImageRequest& request, const IndexImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			IndexImageOutcomeCallable indexImageCallable(const Model::IndexImageRequest& request) const;
			DetectImageTextsOutcome detectImageTexts(const Model::DetectImageTextsRequest &request)const;
			void detectImageTextsAsync(const Model::DetectImageTextsRequest& request, const DetectImageTextsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectImageTextsOutcomeCallable detectImageTextsCallable(const Model::DetectImageTextsRequest& request) const;
			ListImageJobsOutcome listImageJobs(const Model::ListImageJobsRequest &request)const;
			void listImageJobsAsync(const Model::ListImageJobsRequest& request, const ListImageJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListImageJobsOutcomeCallable listImageJobsCallable(const Model::ListImageJobsRequest& request) const;
			CreateGroupFacesJobOutcome createGroupFacesJob(const Model::CreateGroupFacesJobRequest &request)const;
			void createGroupFacesJobAsync(const Model::CreateGroupFacesJobRequest& request, const CreateGroupFacesJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateGroupFacesJobOutcomeCallable createGroupFacesJobCallable(const Model::CreateGroupFacesJobRequest& request) const;
			UpdateImageOutcome updateImage(const Model::UpdateImageRequest &request)const;
			void updateImageAsync(const Model::UpdateImageRequest& request, const UpdateImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateImageOutcomeCallable updateImageCallable(const Model::UpdateImageRequest& request) const;
			ListVideoTasksOutcome listVideoTasks(const Model::ListVideoTasksRequest &request)const;
			void listVideoTasksAsync(const Model::ListVideoTasksRequest& request, const ListVideoTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVideoTasksOutcomeCallable listVideoTasksCallable(const Model::ListVideoTasksRequest& request) const;
			CreateVideoCompressTaskOutcome createVideoCompressTask(const Model::CreateVideoCompressTaskRequest &request)const;
			void createVideoCompressTaskAsync(const Model::CreateVideoCompressTaskRequest& request, const CreateVideoCompressTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVideoCompressTaskOutcomeCallable createVideoCompressTaskCallable(const Model::CreateVideoCompressTaskRequest& request) const;
			UpdateProjectOutcome updateProject(const Model::UpdateProjectRequest &request)const;
			void updateProjectAsync(const Model::UpdateProjectRequest& request, const UpdateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateProjectOutcomeCallable updateProjectCallable(const Model::UpdateProjectRequest& request) const;
			DeleteVideoOutcome deleteVideo(const Model::DeleteVideoRequest &request)const;
			void deleteVideoAsync(const Model::DeleteVideoRequest& request, const DeleteVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVideoOutcomeCallable deleteVideoCallable(const Model::DeleteVideoRequest& request) const;
			ListOfficeConversionTaskOutcome listOfficeConversionTask(const Model::ListOfficeConversionTaskRequest &request)const;
			void listOfficeConversionTaskAsync(const Model::ListOfficeConversionTaskRequest& request, const ListOfficeConversionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOfficeConversionTaskOutcomeCallable listOfficeConversionTaskCallable(const Model::ListOfficeConversionTaskRequest& request) const;
			UpdateSetOutcome updateSet(const Model::UpdateSetRequest &request)const;
			void updateSetAsync(const Model::UpdateSetRequest& request, const UpdateSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSetOutcomeCallable updateSetCallable(const Model::UpdateSetRequest& request) const;
			ListFaceGroupsOutcome listFaceGroups(const Model::ListFaceGroupsRequest &request)const;
			void listFaceGroupsAsync(const Model::ListFaceGroupsRequest& request, const ListFaceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFaceGroupsOutcomeCallable listFaceGroupsCallable(const Model::ListFaceGroupsRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_IMM_IMMCLIENT_H_
